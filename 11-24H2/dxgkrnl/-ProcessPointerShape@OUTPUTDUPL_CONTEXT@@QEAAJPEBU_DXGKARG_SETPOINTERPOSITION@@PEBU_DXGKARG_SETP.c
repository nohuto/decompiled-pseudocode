/*
 * XREFs of ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x140389220
 * Callers:
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x140388F20 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B4404 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B5DC0 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B5F28 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerShape(
        OUTPUTDUPL_CONTEXT *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4)
{
  int updated; // ebx
  __int64 result; // rax
  __int64 v9; // rax
  _QWORD v10[10]; // [rsp+50h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 80) )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    result = 0LL;
    WdLogGlobalForLineNumber = 2045;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, (__int64)a3);
    if ( updated < 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + *((unsigned int *)this + 11) + 6), this);
      v9 = *((unsigned int *)this + 11);
      WdLogGlobalForLineNumber = 2052;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to open local mutex of TYPE_OTHER for global mutex 0x%I64x in OUTPUTDUPL_CONTEXT 0x%I64x",
        *((_QWORD *)this + v9 + 6),
        (__int64)this,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      memset(v10, 0, 0x48uLL);
      v10[1] = 0LL;
      LODWORD(v10[0]) = 2;
      v10[3] = a3;
      v10[4] = a2;
      LODWORD(v10[2]) = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v10);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, 0LL);
    }
    return (unsigned int)updated;
  }
  return result;
}
