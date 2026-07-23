/*
 * XREFs of PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14097FDF8
 * Callers:
 *     PiDqActionDataCreate @ 0x1408D1364 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D24E0 (PiDqPnPGetObjectProperty.c)
 *     PiDqOpenObjectRegKey @ 0x1408E14CC (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14097C698 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140980068 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDqGrowPropertyArray @ 0x140A40B5C (PiDqGrowPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInAllLanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        int *a6,
        unsigned int *a7)
{
  unsigned int v7; // r13d
  int v8; // esi
  int v9; // r15d
  PVOID v10; // r14
  PVOID v11; // rdi
  int v12; // ebx
  __int64 v13; // r9
  unsigned int *v14; // r12
  int *v15; // rsi
  const WCHAR *i; // r15
  int v17; // edx
  unsigned int v18; // r8d
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // [rsp+50h] [rbp-20h]
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 *v30; // [rsp+C8h] [rbp+58h]

  v30 = a4;
  v7 = 0;
  Handle = 0LL;
  v8 = (int)a4;
  v27 = 0LL;
  P = 0LL;
  v9 = 0;
  if ( a2 != 1 )
    v9 = a3;
  v29 = 0;
  v24 = v9;
  v10 = 0LL;
  v11 = 0LL;
  v12 = PiDqOpenObjectRegKey(a2, a4, a3, 1u, 0, a1, &Handle);
  if ( v12 >= 0 )
  {
    v12 = PiDqPnPGetObjectPropertyKeys(v8, v9, (int)Handle, v13, (PVOID *)&v27, &v29);
    if ( v12 >= 0 && v29 )
    {
      v14 = a7;
      v15 = a6;
      v10 = (PVOID)v27;
      while ( 1 )
      {
        v27 = (__int64)v10 + 20 * v7;
        v12 = PiDqPnPGetObjectPropertyLocales((_DWORD)v30, v9, (_DWORD)Handle, (unsigned int)v10 + 20 * v7, (__int64)&P);
        if ( v12 < 0 )
          break;
        if ( !*v14 )
        {
          v20 = a5;
          *v14 = v29;
          v12 = PiDqGrowPropertyArray(v20);
          if ( v12 < 0 )
            break;
        }
        v11 = P;
        for ( i = (const WCHAR *)P; *i; i += v23 + 1 )
        {
          if ( *v15 == *v14 )
          {
            v21 = a5;
            *v14 *= 2;
            v12 = PiDqGrowPropertyArray(v21);
            if ( v12 < 0 )
              goto LABEL_14;
          }
          v12 = PiDqPnPGetObjectProperty(v30, v24, Handle, v27, a2, i, *a5 + 48LL * (unsigned int)*v15);
          if ( v12 < 0 )
            goto LABEL_14;
          ++*v15;
          v23 = -1LL;
          do
            ++v23;
          while ( i[v23] );
        }
        ExFreePoolWithTag(v11, 0x58706E50u);
        v17 = *v15;
        v18 = *v14;
        v11 = 0LL;
        P = 0LL;
        if ( v17 != v18 || (v22 = a5, *v14 = 2 * v18, v12 = PiDqGrowPropertyArray(v22), v12 >= 0) )
        {
          v9 = v24;
          v12 = PiDqPnPGetObjectProperty(
                  v30,
                  v24,
                  Handle,
                  (__int64)v10 + 20 * v7,
                  a2,
                  0LL,
                  *a5 + 48LL * (unsigned int)*v15);
          if ( v12 >= 0 )
          {
            ++*v15;
            if ( ++v7 < v29 )
              continue;
          }
        }
        goto LABEL_14;
      }
      v11 = P;
    }
    else
    {
      v10 = (PVOID)v27;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x58706E50u);
  return (unsigned int)v12;
}
