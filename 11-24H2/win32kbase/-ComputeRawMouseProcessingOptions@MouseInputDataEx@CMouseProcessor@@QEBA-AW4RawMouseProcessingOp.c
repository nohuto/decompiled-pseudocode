/*
 * XREFs of ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x14018C154
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14018F1A8 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     IsEditionPostRawMouseInputMessageSupported @ 0x1400EF5AC (IsEditionPostRawMouseInputMessageSupported.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x14018FB88 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(__int64 a1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  bool v7; // al
  int v8; // ecx
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  int v16; // ebx
  int v17; // esi
  int (*v18)(void); // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 (*v21)(void); // rax
  unsigned int v22; // edi
  bool v23; // al
  unsigned int v24; // ecx

  v2 = *(_DWORD *)(a1 + 88) == 0 ? 0x20 : 0;
  v3 = v2 | 2;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 4096) )
    v3 = v2;
  v4 = v3 | 8;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 128) )
    v4 = v3;
  v5 = v4 | 1;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 32) )
    v5 = v4;
  v6 = v5 | 0x40;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 2048) )
    v6 = v5;
  v7 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x4000);
  v8 = v6 | 0x100;
  if ( !v7 )
    v8 = v6;
  v9 = v8 | 4;
  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    v9 = v8;
  v10 = v9 | 0x400;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 1024) )
    v10 = v9;
  v11 = v10 | 0x80;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 16) )
    v11 = v10;
  v12 = v11 | 0x200;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x8000) )
    v12 = v11;
  v15 = v12 | 0x2000;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 8) )
    v15 = v12;
  if ( *(_DWORD *)(a1 + 88)
    || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 8LL)
    || (unsigned int)IsEditionPostRawMouseInputMessageSupported(v14, v13) == -1073741637 )
  {
    v15 |= 0x10u;
  }
  v16 = v15 | 0x800;
  if ( *(_DWORD *)(a1 + 88) != 4 )
    v16 = v15;
  v17 = 0;
  v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48) + 7296LL);
  if ( !v18 )
    goto LABEL_34;
  if ( v18() >= 0 )
  {
    v21 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20, v19) + 48) + 7304LL);
    if ( v21 )
    {
      v17 = v21();
      goto LABEL_31;
    }
LABEL_34:
    v22 = v16;
    goto LABEL_35;
  }
LABEL_31:
  v22 = v16;
  if ( v17 && (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 2LL) )
    v22 = v16 | 0x1000;
LABEL_35:
  v23 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x20000);
  v24 = v22 | 0x20000;
  if ( !v23 )
    return v22;
  return v24;
}
