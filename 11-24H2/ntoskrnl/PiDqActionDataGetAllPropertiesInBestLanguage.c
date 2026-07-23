/*
 * XREFs of PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408E0590
 * Callers:
 *     PiDqActionDataCreate @ 0x1408D1364 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14097C698 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqGrowPropertyArray @ 0x140A40B5C (PiDqGrowPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInBestLanguage(
        __int64 a1,
        int a2,
        unsigned int a3,
        WCHAR *a4,
        __int64 a5,
        _QWORD *a6,
        _DWORD *a7,
        unsigned int *a8)
{
  void *v10; // rdi
  unsigned int v11; // r15d
  int v12; // eax
  int v13; // r9d
  int v14; // ebx
  _DWORD *v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // r8d
  __int64 v18; // rsi
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  void *v21; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+38h] BYREF

  v21 = 0LL;
  v22 = 0;
  v10 = 0LL;
  Handle = 0LL;
  if ( a2 == 1 )
  {
    v11 = 0;
    v12 = PiDqOpenUserObjectRegKey(a4, a3, 1LL);
  }
  else
  {
    v11 = a3;
    if ( a2 )
    {
      v14 = -1073741811;
      goto LABEL_11;
    }
    v12 = PnpOpenObjectRegKey(*(_QWORD **)&PiPnpRtlCtx, a4, a3, 1, 0, (__int64)&Handle);
  }
  v14 = v12;
  if ( v12 < 0 )
    goto LABEL_11;
  v14 = PiDqPnPGetObjectPropertyKeys((_DWORD)a4, v11, (_DWORD)Handle, v13, (__int64)&v21, (__int64)&v22);
  if ( v14 < 0 )
    goto LABEL_16;
  v15 = a7;
  v16 = v22;
  v17 = *a7 + v22;
  if ( *a8 >= v17 )
    goto LABEL_8;
  *a8 = v17;
  v14 = PiDqGrowPropertyArray(a6);
  if ( v14 < 0 )
  {
LABEL_16:
    v10 = v21;
    goto LABEL_11;
  }
  v16 = v22;
LABEL_8:
  v10 = v21;
  v18 = 0LL;
  if ( v16 )
  {
    do
    {
      v14 = PiDqPnPGetObjectPropertyInBestLocale(
              a4,
              v11,
              Handle,
              (__int64)v10 + 20 * v18,
              a2,
              a5,
              *a6 + 48LL * (unsigned int)*v15);
      if ( v14 < 0 )
        break;
      ++*v15;
      v18 = (unsigned int)(v18 + 1);
    }
    while ( (unsigned int)v18 < v22 );
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  return (unsigned int)v14;
}
