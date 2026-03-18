/*
 * XREFs of ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1403B7828
 * Callers:
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1401DF64C (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FBF18 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1403B76F8 (-GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1403D3CF8 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

struct OUTPUTDUPL_CONTEXT **__fastcall OUTPUTDUPL_MGR::FindContextForProcess(
        OUTPUTDUPL_MGR *this,
        struct _KTHREAD **a2,
        struct _EPROCESS *a3,
        unsigned int *a4)
{
  OUTPUTDUPL_MGR *v7; // r14
  struct _KTHREAD *v8; // rsi
  unsigned int i; // edi
  bool v10; // zf

  v7 = this;
  if ( a2[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1729;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pContextList->Mutex.IsOwner()", 1729LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a4 )
    *a4 = -1;
  v8 = a2[6];
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)v7 + 2) )
      return 0LL;
    if ( *(_QWORD *)v8 )
    {
      this = (OUTPUTDUPL_MGR *)PsGetCurrentProcess(this);
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 24LL) == (_QWORD)this;
    }
    else
    {
      v10 = a3 == 0LL;
    }
    if ( v10 )
      break;
    v8 = (struct _KTHREAD *)((char *)v8 + 8);
  }
  if ( a4 )
    *a4 = i;
  return (struct OUTPUTDUPL_CONTEXT **)v8;
}
