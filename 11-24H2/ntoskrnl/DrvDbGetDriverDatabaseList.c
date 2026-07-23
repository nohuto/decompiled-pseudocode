/*
 * XREFs of DrvDbGetDriverDatabaseList @ 0x1408BB594
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1408BB400 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // r10
  _QWORD *v9; // rax
  int v10; // r15d
  __int64 **v11; // r13
  __int64 **v12; // rdi
  _WORD *v13; // rax
  int v14; // eax
  int v15; // r11d
  unsigned __int64 v16; // rcx
  char *v17; // r9
  const wchar_t *v18; // r8
  _WORD *v19; // rdx
  unsigned __int64 v20; // r10
  signed __int64 v21; // r8
  __int16 v22; // ax
  __int64 v23; // rcx

  v6 = 0;
  v8 = a2;
  v9 = a1;
  v10 = 0;
  *a6 = 0;
  if ( a4 && a5 )
    *a4 = 0;
  v11 = (__int64 **)(a1 + 2);
  v12 = (__int64 **)a1[2];
  while ( v12 != v11 )
  {
    if ( !v8 || (unsigned __int8)guard_dispatch_icall_no_overrides(*v9, v12[3]) )
    {
      v14 = (*((unsigned __int16 *)v12 + 8) >> 1) + 1;
      *a6 += v14;
      if ( a4 )
      {
        v15 = v10 + v14;
        if ( v10 + v14 < a5 )
        {
          v16 = a5 - v10;
          v17 = (char *)&a4[v10];
          if ( !v17 && a5 != v10 || v16 > 0x7FFFFFFF )
            goto LABEL_30;
          v18 = &SourceString;
          if ( v12[3] )
            v18 = (const wchar_t *)v12[3];
          if ( a5 != v10 )
          {
            v19 = &a4[v10];
            v20 = 2147483646 - v16;
            v21 = (char *)v18 - v17;
            do
            {
              if ( !(v20 + v16) )
                break;
              v22 = *(_WORD *)((char *)v19 + v21);
              if ( !v22 )
                break;
              *v19++ = v22;
              --v16;
            }
            while ( v16 );
            v13 = v19 - 1;
            if ( v16 )
              v13 = v19;
            *v13 = 0;
            if ( !v16 )
LABEL_30:
              *(_WORD *)v17 = 0;
          }
          v10 = v15;
        }
      }
    }
    v12 = (__int64 **)*v12;
    v9 = a1;
    v8 = a2;
  }
  v23 = (unsigned int)*a6;
  *a6 = v23 + 1;
  if ( a4 && (int)v23 + 1 <= a5 )
    a4[v23] = 0;
  else
    return (unsigned int)-1073741789;
  return v6;
}
