/*
 * XREFs of ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x14007D2E0
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400743C8 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400A9FC0 (-_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1400A9F1C (-FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::FilterResourceRequirements(FxPkgPnp *this, _IO_RESOURCE_REQUIREMENTS_LIST **IoList)
{
  __int64 v2; // rdi
  _LIST_ENTRY *p_m_InterruptListHead; // rbx
  __int64 v4; // rsi
  unsigned int v5; // r13d
  char v6; // r15
  _LIST_ENTRY *v7; // r12
  _LIST_ENTRY *Flink; // r14
  unsigned int v9; // ebp
  __int64 v10; // rdx
  char v11; // cl
  unsigned __int16 v12; // r9
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  FxInterrupt *p_Blink; // rcx
  unsigned int v19; // [rsp+78h] [rbp+10h]
  __int64 v20; // [rsp+80h] [rbp+18h]

  v2 = (__int64)*IoList;
  v20 = (__int64)*IoList;
  if ( !*IoList )
    return 0LL;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  if ( p_m_InterruptListHead->Flink == p_m_InterruptListHead )
    return 0LL;
  v4 = v2 + 32;
  v5 = 0;
  v19 = 0;
  if ( !*(_DWORD *)(v2 + 28) )
    return 0LL;
  do
  {
    v6 = 0;
    v7 = p_m_InterruptListHead;
    Flink = p_m_InterruptListHead;
    v9 = 0;
    if ( !*(_DWORD *)(v4 + 4) )
      goto LABEL_25;
    do
    {
      v10 = v4 + 32LL * v9 + 8;
      if ( *(_BYTE *)(v10 + 1) != 2 )
        goto LABEL_23;
      v11 = *(_BYTE *)v10 & 8;
      if ( (*(_BYTE *)(v10 + 4) & 2) == 0 )
      {
        if ( !v11 )
          Flink = Flink->Flink;
        if ( v6 )
          Flink = p_m_InterruptListHead->Flink;
        v6 = 0;
        if ( Flink == p_m_InterruptListHead )
        {
          v12 = 11;
          goto LABEL_11;
        }
        p_Blink = (FxInterrupt *)&Flink[-28].Blink;
LABEL_22:
        FxInterrupt::FilterResourceRequirements(p_Blink, (_IO_RESOURCE_DESCRIPTOR *)v10);
        goto LABEL_23;
      }
      v6 = 1;
      if ( !v11 )
        v7 = v7->Flink;
      if ( v7 != p_m_InterruptListHead )
      {
        p_Blink = (FxInterrupt *)&v7[-28].Blink;
        goto LABEL_22;
      }
      v12 = 10;
LABEL_11:
      m_DeviceBase = this->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, v12, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
LABEL_23:
      ++v9;
    }
    while ( v9 < *(_DWORD *)(v4 + 4) );
    v2 = v20;
    v5 = v19;
LABEL_25:
    ++v5;
    v4 += 32LL * v9 + 8;
    v19 = v5;
  }
  while ( v5 < *(_DWORD *)(v2 + 28) );
  return 0LL;
}
