/*
 * XREFs of PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140A49A08
 * Callers:
 *     PiDqActionDataCreate @ 0x140838C90 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiDqGrowPropertyArray @ 0x14083B4C4 (PiDqGrowPropertyArray.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14083B558 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqOpenObjectRegKey @ 0x14083E018 (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D28C0 (PiDqPnPGetObjectProperty.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140A49C78 (PiDqPnPGetObjectPropertyLocales.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInAllLanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        const WCHAR *a4,
        const void **a5,
        unsigned int *a6,
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
  unsigned int *v15; // rsi
  const WCHAR *i; // r15
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v20; // edx
  const void **v21; // rcx
  unsigned int v22; // edx
  const void **v23; // rcx
  const void **v24; // rcx
  __int64 v25; // rax
  int v26; // [rsp+50h] [rbp-20h]
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+50h] BYREF
  const WCHAR *v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v7 = 0;
  Handle = 0LL;
  v8 = (int)a4;
  v29 = 0LL;
  P = 0LL;
  v9 = 0;
  if ( a2 != 1 )
    v9 = a3;
  v31 = 0;
  v26 = v9;
  v10 = 0LL;
  v11 = 0LL;
  v12 = PiDqOpenObjectRegKey(a2, (__int64)a4, a3, 1LL, 0, a1, &Handle);
  if ( v12 >= 0 )
  {
    v12 = PiDqPnPGetObjectPropertyKeys(v8, v9, (__int64)Handle, v13, (PVOID *)&v29, &v31);
    if ( v12 >= 0 && v31 )
    {
      v14 = a7;
      v15 = a6;
      v10 = (PVOID)v29;
      while ( 1 )
      {
        v29 = (__int64)v10 + 20 * v7;
        v12 = PiDqPnPGetObjectPropertyLocales((_DWORD)v32, v9, (_DWORD)Handle, (unsigned int)v10 + 20 * v7, (__int64)&P);
        if ( v12 < 0 )
          break;
        if ( !*v14 )
        {
          v20 = *v15;
          v21 = a5;
          *v14 = v31;
          v12 = PiDqGrowPropertyArray(v21, v20);
          if ( v12 < 0 )
            break;
        }
        v11 = P;
        for ( i = (const WCHAR *)P; *i; i += v25 + 1 )
        {
          v22 = *v15;
          if ( *v15 == *v14 )
          {
            v23 = a5;
            *v14 *= 2;
            v12 = PiDqGrowPropertyArray(v23, v22);
            if ( v12 < 0 )
              goto LABEL_14;
          }
          v12 = PiDqPnPGetObjectProperty(v32, v26, Handle, v29, a2, i, (__int64)*a5 + 48 * *v15);
          if ( v12 < 0 )
            goto LABEL_14;
          ++*v15;
          v25 = -1LL;
          do
            ++v25;
          while ( i[v25] );
        }
        ExFreePoolWithTag(v11, 0x58706E50u);
        v17 = *v15;
        v18 = *v14;
        v11 = 0LL;
        P = 0LL;
        if ( v17 != v18 || (v24 = a5, *v14 = 2 * v18, v12 = PiDqGrowPropertyArray(v24, v17), v12 >= 0) )
        {
          v9 = v26;
          v12 = PiDqPnPGetObjectProperty(v32, v26, Handle, (__int64)v10 + 20 * v7, a2, 0LL, (__int64)*a5 + 48 * *v15);
          if ( v12 >= 0 )
          {
            ++*v15;
            if ( ++v7 < v31 )
              continue;
          }
        }
        goto LABEL_14;
      }
      v11 = P;
    }
    else
    {
      v10 = (PVOID)v29;
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
