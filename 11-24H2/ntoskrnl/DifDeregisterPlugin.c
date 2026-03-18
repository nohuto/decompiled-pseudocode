/*
 * XREFs of DifDeregisterPlugin @ 0x1406186B8
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x1406148D0 (VfVolatileClearDifRuleClass.c)
 *     DifRegisterPlugin @ 0x140618BD0 (DifRegisterPlugin.c)
 * Callees:
 *     ViUnbindDifThunk @ 0x140611178 (ViUnbindDifThunk.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DifDeregisterPlugin(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  int v6; // eax
  __int64 *v7; // rdi
  __int64 *v8; // r14
  _QWORD *v9; // r15
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rsi
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 *v17; // rax
  __int64 **v18; // rcx
  int v19; // edx
  int v20; // edx
  _QWORD *v21; // rbx
  void *v22; // rcx

  if ( (unsigned int)a1 < 0x40 )
  {
    v4 = (unsigned int)a1;
    v5 = (unsigned __int8)a1 & 0x1F;
    v6 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)(unsigned int)a1 >> 5));
    if ( _bittest(&v6, v5) )
    {
      v7 = (__int64 *)DifAPIThunkContextHead;
      while ( v7 != &DifAPIThunkContextHead )
      {
        v8 = v7 - 2;
        v9 = v7 + 2;
        v10 = (_QWORD *)*v9;
        while ( v10 != v9 )
        {
          a1 = v10 - 2;
          v11 = v10;
          v10 = (_QWORD *)*v10;
          if ( *a1 == (_DWORD)v4 )
          {
            if ( (_QWORD *)v10[1] != v11 )
              goto LABEL_35;
            v12 = (_QWORD *)v11[1];
            if ( (_QWORD *)*v12 != v11 )
              goto LABEL_35;
            *v12 = v10;
            v10[1] = v12;
            *v11 = 0LL;
            v11[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v13 = v8 + 6;
        v14 = (_QWORD *)v8[6];
        while ( v14 != v13 )
        {
          a1 = v14 - 2;
          v15 = v14;
          v14 = (_QWORD *)*v14;
          if ( *a1 == (_DWORD)v4 )
          {
            if ( (_QWORD *)v14[1] != v15 )
              goto LABEL_35;
            v16 = (_QWORD *)v15[1];
            if ( (_QWORD *)*v16 != v15 )
              goto LABEL_35;
            *v16 = v14;
            v14[1] = v16;
            *v15 = 0LL;
            v15[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v17 = v7;
        v7 = (__int64 *)*v7;
        if ( (_QWORD *)*v9 == v9 && (_QWORD *)*v13 == v13 )
        {
          if ( (__int64 *)v7[1] != v17 || (v18 = (__int64 **)v17[1], *v18 != v17) )
LABEL_35:
            __fastfail(3u);
          *v18 = v7;
          v7[1] = (__int64)v18;
          *v17 = 0LL;
          v17[1] = 0LL;
          if ( !ViUnbindDifThunk((__int64)&VfDifThunks, *((_DWORD *)v8 + 2))
            && !ViUnbindDifThunk((__int64)&VfPoolThunks, v19) )
          {
            ViUnbindDifThunk((__int64)&VfRegularThunks, v20);
          }
          if ( *v8 )
          {
            ExFreePoolWithTag((PVOID)*v8, 0x4E666944u);
            *v8 = 0LL;
          }
          ExFreePoolWithTag(v8, 0x4E666944u);
        }
      }
      v21 = (_QWORD *)DifPluginSettings[v4];
      if ( v21 )
      {
        if ( v21[1] )
          guard_dispatch_icall_no_overrides(a1, v5, a3, a4);
        v22 = (void *)v21[3];
        if ( v22 )
        {
          ExFreePoolWithTag(v22, 0x4E666944u);
          v21[3] = 0LL;
        }
        ExFreePoolWithTag(v21, 0x4E666944u);
        DifPluginSettings[v4] = 0LL;
      }
      DifPluginStates[v4] = 0;
    }
  }
}
