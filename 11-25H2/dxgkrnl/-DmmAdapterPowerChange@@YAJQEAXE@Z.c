/*
 * XREFs of ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1402BCF08
 * Callers:
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmAdapterPowerChange(PERESOURCE *a1, char a2)
{
  PERESOURCE v3; // rax
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _LIST_ENTRY *v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 != 1 )
    return 0LL;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7914;
    }
    v3 = a1[390];
    if ( !v3 )
      return 0LL;
    Flink = v3[1].SystemResourcesList.Flink;
    if ( Flink )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v10, (__int64)v3[1].SystemResourcesList.Flink);
      _InterlockedIncrement((volatile signed __int32 *)&Flink[7].Blink[4].Blink);
      Blink = Flink[7].Blink;
      v6 = Blink[1].Blink;
      if ( v6 != (struct _LIST_ENTRY *)&Blink[1].Blink )
      {
        p_Blink = &v6[-1].Blink;
        while ( p_Blink )
        {
          v8 = p_Blink[1];
          *((_BYTE *)p_Blink + 396) = 0;
          p_Blink = &v8[-1].Blink;
          if ( v8 == (struct _LIST_ENTRY *)&Blink[1].Blink )
            p_Blink = 0LL;
        }
      }
      if ( Blink )
        ReferenceCounted::Release((ReferenceCounted *)&Blink[4]);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v10 + 40));
      return 0LL;
    }
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 7928;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3223191554LL;
    WdLogGlobalForLineNumber = 7908;
  }
  return result;
}
