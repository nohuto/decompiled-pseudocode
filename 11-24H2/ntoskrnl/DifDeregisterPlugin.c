/*
 * XREFs of DifDeregisterPlugin @ 0x140616C78
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140612E90 (VfVolatileClearDifRuleClass.c)
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 * Callees:
 *     ViUnbindDifThunk @ 0x14060F738 (ViUnbindDifThunk.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall DifDeregisterPlugin(_DWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdx
  int v3; // eax
  __int64 *v4; // rdi
  __int64 *v5; // r14
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 *v14; // rax
  __int64 **v15; // rcx
  int v16; // edx
  int v17; // edx
  _QWORD *v18; // rbx
  void *v19; // rcx

  if ( (unsigned int)a1 < 0x40 )
  {
    v1 = (unsigned int)a1;
    v2 = (unsigned __int8)a1 & 0x1F;
    v3 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)(unsigned int)a1 >> 5));
    if ( _bittest(&v3, v2) )
    {
      v4 = (__int64 *)DifAPIThunkContextHead;
      while ( v4 != &DifAPIThunkContextHead )
      {
        v5 = v4 - 2;
        v6 = v4 + 2;
        v7 = (_QWORD *)*v6;
        while ( v7 != v6 )
        {
          a1 = v7 - 2;
          v8 = v7;
          v7 = (_QWORD *)*v7;
          if ( *a1 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v7[1] != v8 )
              goto LABEL_35;
            v9 = (_QWORD *)v8[1];
            if ( (_QWORD *)*v9 != v8 )
              goto LABEL_35;
            *v9 = v7;
            v7[1] = v9;
            *v8 = 0LL;
            v8[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v10 = v5 + 6;
        v11 = (_QWORD *)v5[6];
        while ( v11 != v10 )
        {
          a1 = v11 - 2;
          v12 = v11;
          v11 = (_QWORD *)*v11;
          if ( *a1 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v11[1] != v12 )
              goto LABEL_35;
            v13 = (_QWORD *)v12[1];
            if ( (_QWORD *)*v13 != v12 )
              goto LABEL_35;
            *v13 = v11;
            v11[1] = v13;
            *v12 = 0LL;
            v12[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v14 = v4;
        v4 = (__int64 *)*v4;
        if ( (_QWORD *)*v6 == v6 && (_QWORD *)*v10 == v10 )
        {
          if ( (__int64 *)v4[1] != v14 || (v15 = (__int64 **)v14[1], *v15 != v14) )
LABEL_35:
            __fastfail(3u);
          *v15 = v4;
          v4[1] = (__int64)v15;
          *v14 = 0LL;
          v14[1] = 0LL;
          if ( !ViUnbindDifThunk((__int64)&VfDifThunks, *((_DWORD *)v5 + 2))
            && !ViUnbindDifThunk((__int64)&VfPoolThunks, v16) )
          {
            ViUnbindDifThunk((__int64)&VfRegularThunks, v17);
          }
          if ( *v5 )
          {
            ExFreePoolWithTag((PVOID)*v5, 0x4E666944u);
            *v5 = 0LL;
          }
          ExFreePoolWithTag(v5, 0x4E666944u);
        }
      }
      v18 = (_QWORD *)DifPluginSettings[v1];
      if ( v18 )
      {
        if ( v18[1] )
          guard_dispatch_icall_no_overrides(a1, v2);
        v19 = (void *)v18[3];
        if ( v19 )
        {
          ExFreePoolWithTag(v19, 0x4E666944u);
          v18[3] = 0LL;
        }
        ExFreePoolWithTag(v18, 0x4E666944u);
        DifPluginSettings[v1] = 0LL;
      }
      DifPluginStates[v1] = 0;
    }
  }
}
