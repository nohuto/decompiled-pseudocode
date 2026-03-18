/*
 * XREFs of ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E1D4
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?FlipManagerGetTracingIdFromToken@@YAIPEAVCFlipManagerToken@@@Z @ 0x14000B224 (-FlipManagerGetTracingIdFromToken@@YAIPEAVCFlipManagerToken@@@Z.c)
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x14000B3C8 (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x14000B3F8 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z @ 0x14004CA3C (-FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z.c)
 *     ?AddToFrameTokenList@CFlipManagerToken@@QEAAXAEAU_LIST_ENTRY@@@Z @ 0x14005E08C (-AddToFrameTokenList@CFlipManagerToken@@QEAAXAEAU_LIST_ENTRY@@@Z.c)
 *     Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline @ 0x140098428 (Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C05C (-FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFl.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::CompleteFlipManagerToken(
        struct _LIST_ENTRY *this,
        struct FlipManagerTokenObject *a2,
        bool *a3)
{
  bool v4; // r15
  struct CToken *v6; // rdi
  unsigned __int8 v7; // r14
  bool v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  void (__fastcall *v11)(_QWORD, __int64, _QWORD, bool, bool, _DWORD, _DWORD, _DWORD); // rbx
  unsigned int TracingIdFromToken; // eax
  CTokenManager *v13; // rax
  CTokenManager **Blink; // rdx
  CTokenManager *v15; // rax
  CTokenManager **v16; // rdx
  struct _LIST_ENTRY *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 Win32kImportTable; // rax
  unsigned __int8 v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+58h] [rbp-8h]
  struct CToken *PreviousState; // [rsp+B0h] [rbp+50h] BYREF
  struct CFlipManagerSignal *v25; // [rsp+B8h] [rbp+58h] BYREF

  *a3 = 1;
  v4 = 0;
  PreviousState = 0LL;
  if ( (int)FlipManagerTokenObject::LockForWrite((char *)a2, &PreviousState) >= 0 )
  {
    v6 = PreviousState;
    v7 = 0;
    v8 = 0;
    v21 = 0;
    LOBYTE(v25) = 0;
    LOBYTE(PreviousState) = 0;
    v9 = *((_QWORD *)v6 + 10);
    v22 = *((_QWORD *)v6 + 12);
    if ( v9 )
    {
      if ( (unsigned int)Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline() )
      {
        v10 = *(_QWORD *)(v9 + 104);
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 56) )
          {
            v4 = 1;
            *(_BYTE *)(v9 + 28) = 0;
          }
          if ( *(_BYTE *)(v9 + 28) )
          {
            v7 = 1;
            v8 = *(_DWORD *)(v10 + 36) == 1;
          }
        }
      }
      else
      {
        v7 = *(_BYTE *)(v9 + 28);
        if ( v7 )
        {
          v8 = *(_DWORD *)(*(_QWORD *)(v9 + 104) + 36LL) == 1;
          v4 = *(_DWORD *)(*(_QWORD *)(v9 + 104) + 56LL) != 0;
        }
      }
      v21 = *(_BYTE *)(v9 + 86);
      LOBYTE(v25) = *(_BYTE *)(v9 + 84);
      LOBYTE(PreviousState) = *(_BYTE *)(v9 + 92);
    }
    v11 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, bool, bool, _DWORD, _DWORD, _DWORD))(DxgkGetWin32kImportTable()
                                                                                             + 96);
    TracingIdFromToken = FlipManagerGetTracingIdFromToken(v6);
    v11(TracingIdFromToken, v22, v7, v8, v4, v21, (unsigned __int8)v25, (unsigned __int8)PreviousState);
    if ( *((_DWORD *)v6 + 8) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v6 + 1) + 24LL))((__int64)v6 + 8);
      v8 = 0;
    }
    else
    {
      Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline();
    }
    if ( *((_BYTE *)v6 + 120) )
    {
      if ( !v7 )
      {
        v19 = *((_QWORD *)v6 + 13);
        if ( v19 )
        {
          Win32kImportTable = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(__int64))(Win32kImportTable + 64))(v19);
        }
        goto LABEL_31;
      }
      if ( v8 )
      {
        if ( !(unsigned int)Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline() && v4 )
        {
LABEL_31:
          CFlipManagerToken::AddToFrameTokenList(v6, this + 18);
          *a3 = 0;
LABEL_28:
          CFlipManagerToken::UnlockAndRelease(v6);
          v18 = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(__int64))(v18 + 104))(v22);
          return;
        }
        PreviousState = 0LL;
        v25 = 0LL;
        FlipManagerConsumerImmediateTokenCompleted(v6, &PreviousState, &v25);
        if ( PreviousState )
        {
          v13 = (struct CToken *)((char *)PreviousState + 8);
          Blink = (CTokenManager **)this[19].Blink;
          if ( *Blink != (CTokenManager *)&this[19]
            || ((*(_QWORD *)v13 = this + 19,
                 *((_QWORD *)v13 + 1) = Blink,
                 *Blink = v13,
                 this[19].Blink = (struct _LIST_ENTRY *)v13,
                 !v25)
              ? (v15 = 0LL)
              : (v15 = (struct CFlipManagerSignal *)((char *)v25 + 8)),
                v16 = (CTokenManager **)this[20].Blink,
                *v16 != (CTokenManager *)&this[20]) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v15 = this + 20;
          *((_QWORD *)v15 + 1) = v16;
          *v16 = v15;
          this[20].Blink = (struct _LIST_ENTRY *)v15;
          v17 = this[4].Blink;
          LODWORD(PreviousState) = 0;
          ZwSetEvent(v17, (PLONG)&PreviousState);
          *a3 = 0;
        }
      }
      else
      {
        FlipManagerConsumerIFlipTokenSubmitted(v6);
      }
    }
    if ( a2 )
      ObfDereferenceObject(a2);
    goto LABEL_28;
  }
}
