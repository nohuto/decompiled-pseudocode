/*
 * XREFs of DifAddPerDriverDataForPlugins @ 0x140615E7C
 * Callers:
 *     VfTargetDriversAdd @ 0x1403E3ED4 (VfTargetDriversAdd.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DifAddPerDriverDataForPlugins(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int *v4; // rcx
  unsigned int v5; // ebp
  _QWORD *Pool2; // r14
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  void *v13; // rcx

  v1 = 0LL;
  v3 = 0;
  while ( (unsigned int)v1 < 0x40 )
  {
    v4 = (unsigned int *)DifPluginSettings[v1];
    if ( v4 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x63446644u);
        if ( !Pool2 )
          goto LABEL_11;
        v7 = ExAllocatePool2(0x40uLL, v5, 0x63446644u);
        if ( !v7 )
        {
          ExFreePoolWithTag(Pool2, 0x4E666944u);
LABEL_11:
          v3 = -1073741801;
          while ( 1 )
          {
            v10 = *(_QWORD **)a1;
            if ( *(_QWORD *)a1 == a1 )
              return v3;
            if ( v10[1] != a1 )
              goto LABEL_19;
            v11 = *v10;
            if ( *(_QWORD **)(*v10 + 8LL) != v10 )
              goto LABEL_19;
            v12 = v10 - 2;
            *(_QWORD *)a1 = v11;
            *(_QWORD *)(v11 + 8) = a1;
            if ( v10 != (_QWORD *)16 )
            {
              v13 = (void *)v12[1];
              if ( v13 )
              {
                ExFreePoolWithTag(v13, 0x4E666944u);
                v12[1] = 0LL;
              }
              ExFreePoolWithTag(v12, 0x4E666944u);
            }
          }
        }
        Pool2[1] = v7;
        v8 = Pool2 + 2;
        *(_DWORD *)Pool2 = v1;
        v9 = *(_QWORD **)(a1 + 8);
        if ( *v9 != a1 )
LABEL_19:
          __fastfail(3u);
        *v8 = a1;
        Pool2[3] = v9;
        *v9 = v8;
        *(_QWORD *)(a1 + 8) = v8;
      }
    }
    v1 = (unsigned int)(v1 + 1);
  }
  return v3;
}
