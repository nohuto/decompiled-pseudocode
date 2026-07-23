/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x1408D1B70
 * Callers:
 *     PiDqActionDataCreate @ 0x1408D1364 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D24E0 (PiDqPnPGetObjectProperty.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        __int64 a1,
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
  __int64 Handle; // [rsp+40h] [rbp-48h]
  PVOID P[8]; // [rsp+48h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P[0] = 0LL;
  *a9 = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 48LL * a7, 0x58706E50u);
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
      v9 = PiDqOpenUserObjectRegKey(a3, a2, 1LL);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = -1LL;
      }
    }
    if ( Handle == -1 )
    {
      *(_OWORD *)v15 = *(_OWORD *)(v13 - 5);
      v19 = *(_OWORD *)(v13 - 1);
      *(_DWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0LL;
      *(_DWORD *)(v15 + 36) = 0;
      *(_OWORD *)(v15 + 16) = v19;
      goto LABEL_9;
    }
    v14 = Handle;
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
  if ( (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose((HANDLE)Handle);
  if ( P[0] )
    PiPnpRtlEndOperation((PVOID **)P[0]);
  return (unsigned int)v9;
}
