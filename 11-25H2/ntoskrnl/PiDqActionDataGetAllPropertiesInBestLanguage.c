/*
 * XREFs of PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14083D1D8
 * Callers:
 *     PiDqActionDataCreate @ 0x140838C90 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiDqGrowPropertyArray @ 0x14083B4C4 (PiDqGrowPropertyArray.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14083B558 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqOpenUserObjectRegKey @ 0x14083E2D0 (PiDqOpenUserObjectRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D2170 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInBestLanguage(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        const void **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  int v8; // r13d
  PVOID v10; // rdi
  int v11; // r15d
  int v12; // eax
  __int64 v13; // r9
  int v14; // ebx
  unsigned int *v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // esi
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  PVOID v22; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+38h] BYREF

  v8 = a4;
  v22 = 0LL;
  v23 = 0;
  v10 = 0LL;
  Handle = 0LL;
  if ( a2 == 1 )
  {
    v11 = 0;
    v12 = PiDqOpenUserObjectRegKey(a4, a3, 1LL, 0LL, a1, &Handle);
  }
  else
  {
    v11 = a3;
    if ( a2 )
    {
      v14 = -1073741811;
      goto LABEL_11;
    }
    v12 = PnpOpenObjectRegKey(PiPnpRtlCtx, a4, a3, 1, 0, (__int64)&Handle);
  }
  v14 = v12;
  if ( v12 < 0 )
    goto LABEL_11;
  v14 = PiDqPnPGetObjectPropertyKeys(v8, v11, (__int64)Handle, v13, &v22, &v23);
  if ( v14 < 0 )
    goto LABEL_16;
  v15 = a7;
  v16 = v23;
  v17 = *a7;
  v18 = *a7 + v23;
  if ( *a8 >= v18 )
    goto LABEL_8;
  *a8 = v18;
  v14 = PiDqGrowPropertyArray(a6, v17);
  if ( v14 < 0 )
  {
LABEL_16:
    v10 = v22;
    goto LABEL_11;
  }
  v16 = v23;
LABEL_8:
  v10 = v22;
  v19 = 0;
  if ( v16 )
  {
    do
    {
      v14 = PiDqPnPGetObjectPropertyInBestLocale(
              v8,
              v11,
              (_DWORD)Handle,
              (unsigned int)v10 + 20 * v19,
              a2,
              a5,
              (__int64)*a6 + 48 * *v15);
      if ( v14 < 0 )
        break;
      ++*v15;
      ++v19;
    }
    while ( v19 < v23 );
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  return (unsigned int)v14;
}
