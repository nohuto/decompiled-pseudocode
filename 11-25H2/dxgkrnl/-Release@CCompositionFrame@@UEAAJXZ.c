/*
 * XREFs of ?Release@CCompositionFrame@@UEAAJXZ @ 0x140024A80
 * Callers:
 *     <none>
 * Callees:
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140024F78 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x140025078 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionFrame::Release(char *P)
{
  unsigned __int32 v2; // ebx
  bool v4; // zf
  __int64 (__fastcall ***i)(_QWORD); // rdi
  struct CLegacyTokenBuffer *v6; // rdx
  PVOID *v7; // r14
  PVOID *v8; // rax
  PVOID v9; // rcx
  PVOID *v10; // rdi
  PVOID v11; // rcx
  PVOID *v12; // r14
  PVOID *v13; // rax
  PVOID v14; // rcx
  PVOID *v15; // rdi
  _QWORD *v16; // rcx
  __int64 v17; // rdx

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 2);
  if ( !v2 && P )
  {
    v4 = *((_DWORD *)P + 50) == 3;
    *(_QWORD *)P = &CCompositionFrame::`vftable';
    if ( !v4 )
    {
      for ( i = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)P + 26); i; *((_QWORD *)P + 26) = i )
      {
        i = (__int64 (__fastcall ***)(_QWORD))(**i)(i);
        LOBYTE(v17) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)P + 26) + 8LL))(*((_QWORD *)P + 26), v17);
      }
      v6 = (struct CLegacyTokenBuffer *)*((_QWORD *)P + 27);
      *((_DWORD *)P + 50) = 3;
      if ( v6 )
      {
        CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)P + 38), v6);
        *((_QWORD *)P + 27) = 0LL;
      }
      v7 = (PVOID *)(P + 256);
      P[224] = 0;
      v8 = (PVOID *)*((_QWORD *)P + 32);
      if ( v8[1] != P + 256 )
        goto LABEL_25;
      v9 = *v8;
      if ( *((PVOID **)*v8 + 1) != v8 )
        goto LABEL_25;
      *v7 = v9;
      *((_QWORD *)v9 + 1) = v7;
      if ( v8 != v7 )
      {
        while ( 1 )
        {
          v10 = v8 - 1;
          (*((void (__fastcall **)(PVOID *))*(v8 - 1) + 7))(v8 - 1);
          (*(void (__fastcall **)(PVOID *, __int64))*v10)(v10, 1LL);
          v8 = (PVOID *)*v7;
          if ( *((PVOID **)*v7 + 1) != v7 )
            break;
          v11 = *v8;
          if ( *((PVOID **)*v8 + 1) != v8 )
            break;
          *v7 = v11;
          *((_QWORD *)v11 + 1) = v7;
          if ( v8 == v7 )
            goto LABEL_14;
        }
LABEL_25:
        __fastfail(3u);
      }
LABEL_14:
      v12 = (PVOID *)(P + 272);
      v13 = (PVOID *)*((_QWORD *)P + 34);
      if ( v13[1] != P + 272 )
        goto LABEL_25;
      v14 = *v13;
      if ( *((PVOID **)*v13 + 1) != v13 )
        goto LABEL_25;
      *v12 = v14;
      for ( *((_QWORD *)v14 + 1) = v12; v13 != v12; v16[1] = v12 )
      {
        v15 = v13 - 6;
        (*((void (__fastcall **)(PVOID *))*(v13 - 1) + 7))(v13 - 1);
        ObfDereferenceObject(v15);
        v13 = (PVOID *)*v12;
        if ( *((PVOID **)*v12 + 1) != v12 )
          goto LABEL_25;
        v16 = *v13;
        if ( *((PVOID **)*v13 + 1) != v13 )
          goto LABEL_25;
        *v12 = v16;
      }
      FlipManagerDwmProcessFlipManagerSignal((struct _LIST_ENTRY *)P + 18, *((_QWORD *)P + 24));
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)P + 38) + 8LL))(*((_QWORD *)P + 38));
    ExFreePoolWithTag(P, 0);
  }
  return v2;
}
