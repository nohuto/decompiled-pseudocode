/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x140369438
 * Callers:
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x14036D014 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x140368EA0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x140369C80 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x14036CD34 (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        bool a4)
{
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  int v10; // eax
  unsigned int v11; // edi
  CCD_TOPOLOGY *v12; // rcx
  int TopologyClass; // eax
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp+18h] BYREF

  if ( (a3 & 0xF) != 0xF )
    return 3221225485LL;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData && *((_BYTE *)SessionData + 18498) )
    return 3221226021LL;
  result = CCD_STORE::ForTopology(
             a2,
             (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback,
             this,
             0);
  if ( (int)result >= 0 )
  {
    v10 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(*(struct CCD_TOPOLOGY **)this, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v10,
        this,
        *(_QWORD *)this,
        *(_QWORD *)(*(_QWORD *)this + 64LL),
        *((unsigned int *)this + 2));
      WdLogGlobalForLineNumber = 828;
    }
    else
    {
      v12 = *(CCD_TOPOLOGY **)this;
      v15 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v12, (enum CCD_TOPOLOGY_CLASS *)&v15);
      v14 = *(_QWORD *)this;
      v11 = TopologyClass;
      if ( TopologyClass < 0 )
      {
        WdLogSingleEntry3(2LL, TopologyClass, *(_QWORD *)this, *(_QWORD *)(v14 + 64));
        WdLogGlobalForLineNumber = 845;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(v14 + 64) + 32LL) = v15;
      }
    }
    return v11;
  }
  return result;
}
