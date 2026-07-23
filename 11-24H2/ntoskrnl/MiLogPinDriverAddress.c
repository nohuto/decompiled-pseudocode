/*
 * XREFs of MiLogPinDriverAddress @ 0x140A29204
 * Callers:
 *     MiLogPinDriverAddressesWorker @ 0x140A29100 (MiLogPinDriverAddressesWorker.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     MmLockLoadedDataTableEntry @ 0x1402BBA08 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402BBE58 (MmUnlockLoadedDataTableEntry.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogPinDriverAddress(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // esi
  UNICODE_STRING *p_DestinationString; // rdi
  int v7; // r14d
  char v8; // al
  unsigned int v9; // ecx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v22[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  int *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  _DWORD *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  wchar_t *Buffer; // [rsp+130h] [rbp+30h]
  _DWORD v44[2]; // [rsp+138h] [rbp+38h] BYREF
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  UNICODE_STRING *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]

  v2 = *a1 & 0xFFFFFFFFFFFFF000uLL;
  DestinationString = 0LL;
  v3 = MmLockLoadedDataTableEntry(v2);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 120);
    p_DestinationString = (UNICODE_STRING *)(v3 + 88);
    v7 = *(_DWORD *)(v3 + 156);
  }
  else
  {
    v5 = 0;
    v7 = 0;
    p_DestinationString = &DestinationString;
    RtlInitUnicodeString(&DestinationString, L"Image not found");
  }
  if ( **(_DWORD **)&qword_140E37658 > 5u )
  {
    if ( (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 16LL) & 0x400000000000LL) == 0
      || (v8 = 1,
          (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 0x400000000000LL) != *(_QWORD *)(*(_QWORD *)&qword_140E37658
                                                                                            + 24LL)) )
    {
      v8 = 0;
    }
    if ( v8 )
    {
      v9 = *(_DWORD *)a1;
      v23 = &v21;
      v21 = 1LL;
      v10 = (v9 >> 1) & 1;
      v25 = &v10;
      v24 = 8LL;
      v11 = (v9 >> 2) & 1;
      v27 = &v11;
      v26 = 4LL;
      v12 = (v9 >> 3) & 1;
      v29 = &v12;
      v28 = 4LL;
      v13 = (v9 >> 4) & 1;
      v31 = &v13;
      v30 = 4LL;
      v14 = (v9 >> 5) & 1;
      v33 = &v14;
      v32 = 4LL;
      v15 = (unsigned __int8)v9 >> 6;
      v35 = &v15;
      v16 = (v9 >> 10) & 3;
      v34 = 4LL;
      v37 = &v16;
      v39 = &v17;
      v41 = v44;
      Buffer = p_DestinationString->Buffer;
      v44[0] = p_DestinationString->Length;
      v45 = &v18;
      v47 = &v19;
      *(_QWORD *)&DestinationString.Length = 2164260864LL;
      v49 = &DestinationString;
      v36 = 4LL;
      v38 = 4LL;
      v17 = (v9 >> 8) & 3;
      v40 = 4LL;
      v42 = 2LL;
      v44[1] = 0;
      v18 = v5;
      v46 = 4LL;
      v19 = v7;
      v48 = 4LL;
      v50 = 8LL;
      tlgWriteAgg(
        *(__int64 *)&qword_140E37658,
        (unsigned __int8 *)&dword_140059314,
        *(__int64 *)&qword_140E37658,
        0x10u,
        (__int64)v22);
    }
  }
  if ( v4 )
    MmUnlockLoadedDataTableEntry(v4);
}
