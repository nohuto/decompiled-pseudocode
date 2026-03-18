/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x1408D1F44
 * Callers:
 *     PiDqActionDataCreate @ 0x140838C90 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiDqOpenUserObjectRegKey @ 0x14083E2D0 (PiDqOpenUserObjectRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D2170 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D28C0 (PiDqPnPGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8,
        _DWORD *a9)
{
  int v9; // ebx
  unsigned int v10; // r15d
  __int64 Pool2; // rax
  unsigned int v12; // ebp
  _DWORD *v13; // rsi
  int v14; // r8d
  __int64 v15; // rdi
  int v16; // r9d
  int v17; // eax
  __int128 v19; // xmm1
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  PVOID P[8]; // [rsp+48h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P[0] = 0LL;
  *a9 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  *a8 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_10;
  }
  PiPnpRtlBeginOperation(P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_10;
  v13 = (_DWORD *)(a6 + 20);
  while ( 1 )
  {
    v14 = 0;
    v15 = *a8 + 48LL * (unsigned int)*a9;
    if ( !*v13 )
      goto LABEL_5;
    if ( *v13 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      Handle = 0LL;
      v9 = PiDqOpenUserObjectRegKey(a3, a2, 1u, 0, a1, &Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v15 = *(_OWORD *)(v13 - 5);
      v19 = *(_OWORD *)(v13 - 1);
      *(_DWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0LL;
      *(_DWORD *)(v15 + 36) = 0;
      *(_OWORD *)(v15 + 16) = v19;
      goto LABEL_9;
    }
    v14 = (int)Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_10;
    v16 = a6 + 32 * v12;
    v17 = a4
        ? PiDqPnPGetObjectPropertyInBestLocale(a3, v10, v14, v16, *v13, a5, v15)
        : PiDqPnPGetObjectProperty(a3, v10, v14, v16, *v13, *(_QWORD *)(v13 + 1), v15);
    v9 = v17;
    if ( v17 < 0 )
      goto LABEL_10;
LABEL_9:
    ++*a9;
    ++v12;
    v13 += 8;
    if ( v12 >= a7 )
      goto LABEL_10;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_10:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation((PVOID **)P[0]);
  return (unsigned int)v9;
}
