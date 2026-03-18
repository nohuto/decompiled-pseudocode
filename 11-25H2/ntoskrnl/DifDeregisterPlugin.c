/*
 * XREFs of DifDeregisterPlugin @ 0x14060C6F8
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140608910 (VfVolatileClearDifRuleClass.c)
 *     DifRegisterPlugin @ 0x14060CC10 (DifRegisterPlugin.c)
 * Callees:
 *     ViUnbindDifThunk @ 0x1406051B8 (ViUnbindDifThunk.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DifDeregisterPlugin(_DWORD *a1)
{
  __int64 v1; // rbp
  int v2; // eax
  __int64 *v3; // rdi
  __int64 *v4; // r14
  _QWORD *v5; // r15
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 *v13; // rax
  __int64 **v14; // rcx
  int v15; // edx
  int v16; // edx
  _QWORD *v17; // rbx
  void *v18; // rcx

  if ( (unsigned int)a1 < 0x40 )
  {
    v1 = (unsigned int)a1;
    v2 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)(unsigned int)a1 >> 5));
    if ( _bittest(&v2, (unsigned __int8)a1 & 0x1F) )
    {
      v3 = (__int64 *)DifAPIThunkContextHead;
      while ( v3 != &DifAPIThunkContextHead )
      {
        v4 = v3 - 2;
        v5 = v3 + 2;
        v6 = (_QWORD *)*v5;
        while ( v6 != v5 )
        {
          a1 = v6 - 2;
          v7 = v6;
          v6 = (_QWORD *)*v6;
          if ( *a1 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v6[1] != v7 )
              goto LABEL_35;
            v8 = (_QWORD *)v7[1];
            if ( (_QWORD *)*v8 != v7 )
              goto LABEL_35;
            *v8 = v6;
            v6[1] = v8;
            *v7 = 0LL;
            v7[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v9 = v4 + 6;
        v10 = (_QWORD *)v4[6];
        while ( v10 != v9 )
        {
          a1 = v10 - 2;
          v11 = v10;
          v10 = (_QWORD *)*v10;
          if ( *a1 == (_DWORD)v1 )
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
        v13 = v3;
        v3 = (__int64 *)*v3;
        if ( (_QWORD *)*v5 == v5 && (_QWORD *)*v9 == v9 )
        {
          if ( (__int64 *)v3[1] != v13 || (v14 = (__int64 **)v13[1], *v14 != v13) )
LABEL_35:
            __fastfail(3u);
          *v14 = v3;
          v3[1] = (__int64)v14;
          *v13 = 0LL;
          v13[1] = 0LL;
          if ( !ViUnbindDifThunk((__int64)&VfDifThunks, *((_DWORD *)v4 + 2))
            && !ViUnbindDifThunk((__int64)&VfPoolThunks, v15) )
          {
            ViUnbindDifThunk((__int64)&VfRegularThunks, v16);
          }
          if ( *v4 )
          {
            ExFreePoolWithTag((PVOID)*v4, 0x4E666944u);
            *v4 = 0LL;
          }
          ExFreePoolWithTag(v4, 0x4E666944u);
        }
      }
      v17 = (_QWORD *)DifPluginSettings[v1];
      if ( v17 )
      {
        if ( v17[1] )
          guard_dispatch_icall_no_overrides(a1);
        v18 = (void *)v17[3];
        if ( v18 )
        {
          ExFreePoolWithTag(v18, 0x4E666944u);
          v17[3] = 0LL;
        }
        ExFreePoolWithTag(v17, 0x4E666944u);
        DifPluginSettings[v1] = 0LL;
      }
      DifPluginStates[v1] = 0;
    }
  }
}
