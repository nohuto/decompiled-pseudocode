/*
 * XREFs of ?DxgkCddSubscribeWnfStateChange@@YAPEAU_CDD_WNF_CALLBACK_CONTEXT@@P6AJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@ZPEAU_EPROCESS@@1K3@Z @ 0x1403E5AF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct _EX_RUNDOWN_REF *__fastcall DxgkCddSubscribeWnfStateChange(
        int (*a1)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, unsigned int, unsigned int, const struct _WNF_TYPE_ID *, void *),
        struct _EPROCESS *a2,
        const struct _WNF_STATE_NAME *a3,
        unsigned int a4,
        void *a5)
{
  struct _EX_RUNDOWN_REF *v9; // rbx
  int v10; // eax
  PVOID Ptr; // rcx

  v9 = (struct _EX_RUNDOWN_REF *)operator new(0x28uLL, 0x4B677844u, 256LL);
  if ( v9 )
  {
    ObfReferenceObject(a2);
    v9[2].Count = (ULONG_PTR)a5;
    v9[3].Count = (ULONG_PTR)a2;
    v9[1].Count = (ULONG_PTR)a1;
    ExInitializeRundownProtection(v9 + 4);
    v10 = ExSubscribeWnfStateChange(v9, a3, a4);
    if ( v10 >= 0 )
      return v9;
    WdLogSingleEntry2(3LL, v10, a5);
    Ptr = v9[3].Ptr;
    WdLogGlobalForLineNumber = 3933;
    ObfDereferenceObject(Ptr);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  }
  else
  {
    WdLogSingleEntry1(6LL, a5);
    WdLogGlobalForLineNumber = 3919;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocated CDD_WNF_CALLBACK_CONTEXT. CddPdev: 0x%I64x",
      (__int64)a5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
