/*
 * XREFs of MiLogFailedDriverLoad @ 0x140A1375C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     MiCreateSectionForDriver @ 0x140A1340C (MiCreateSectionForDriver.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x1403BF170 (MiIsRetryIoStatus.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     IoWriteErrorLogEntry @ 0x1404AB020 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1405931A8 (IoAllocateGenericErrorLogEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

void __fastcall MiLogFailedDriverLoad(unsigned __int16 *a1, unsigned __int16 *a2, const CHAR *a3, NTSTATUS a4)
{
  int v4; // r15d
  __int64 v5; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // r12d
  __int128 v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ecx
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // eax
  int v15; // edi
  __int64 GenericErrorLogEntry; // rax
  _WORD *v17; // rdi
  char *v18; // r15
  const void **v19; // r12
  size_t v20; // rbx
  char *v21; // rax
  UNICODE_STRING v22; // [rsp+20h] [rbp-59h] BYREF
  STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  __int128 v24; // [rsp+50h] [rbp-29h] BYREF
  __int16 v25; // [rsp+60h] [rbp-19h]
  const wchar_t *v26; // [rsp+68h] [rbp-11h]
  __int128 v27; // [rsp+70h] [rbp-9h]
  UNICODE_STRING v28; // [rsp+80h] [rbp+7h]

  v4 = *a1 + 2;
  DestinationString = 0LL;
  v5 = -1LL;
  v6 = a4;
  v7 = 0;
  v8 = *(_OWORD *)a1;
  v22 = 0LL;
  v24 = v8;
  if ( !a2 || a4 != -1073741702 && a4 != -1073741772 && (unsigned int)(a4 + 1073741214) > 1 )
  {
    v9 = 1LL;
LABEL_11:
    v7 = v6;
    v26 = L"failed to load";
    do
      ++v5;
    while ( aFailedToLoad[v5] );
    v15 = 2 * v5;
    v25 = v15;
    v4 += v15 + 2;
    v6 = MiIsRetryIoStatus(v6, 0x1000uLL) ? -1073741670 : -1073741204;
    ++v9;
    goto LABEL_15;
  }
  v10 = -1LL;
  v26 = L"cannot find";
  do
    ++v10;
  while ( aCannotFind[v10] );
  v11 = 2 * v10;
  v12 = *(_OWORD *)a2;
  v13 = v11 + *a2;
  v25 = v11;
  v9 = 3LL;
  v4 += v13 + 4;
  v27 = v12;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v7 = (int)a3;
      goto LABEL_15;
    }
    RtlInitAnsiString(&DestinationString, a3);
    v14 = RtlAnsiStringToUnicodeString(&v22, &DestinationString, 1u);
    v9 = 4LL;
    v4 += v22.Length + 2;
    v28 = v22;
    if ( v14 >> 31 == 1 )
      goto LABEL_11;
  }
LABEL_15:
  if ( (unsigned int)(v4 + 48) < 0xFF )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry((unsigned __int8)v4 + 48);
    v17 = (_WORD *)GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *(_DWORD *)(GenericErrorLogEntry + 16) = v7;
      v18 = (char *)(GenericErrorLogEntry + 48);
      v19 = (const void **)&v24 + 1;
      *(_DWORD *)(GenericErrorLogEntry + 12) = 1073741850;
      *(_DWORD *)(GenericErrorLogEntry + 20) = v6;
      *(_WORD *)(GenericErrorLogEntry + 6) = 48;
      do
      {
        v20 = *((unsigned __int16 *)v19 - 4);
        memmove(v18, *v19, v20);
        v19 += 2;
        v21 = &v18[2 * (v20 >> 1)];
        *(_WORD *)v21 = 32;
        v18 = v21 + 2;
        --v9;
      }
      while ( v9 );
      *(_WORD *)v21 = 0;
      v17[2] = 1;
      IoWriteErrorLogEntry(v17);
    }
  }
  if ( v22.Buffer )
    ExFreePool(v22.Buffer);
}
