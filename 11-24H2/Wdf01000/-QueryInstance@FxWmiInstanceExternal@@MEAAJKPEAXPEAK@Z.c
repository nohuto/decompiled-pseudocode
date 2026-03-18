/*
 * XREFs of ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x140064090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qddq @ 0x14008DD98 (WPP_IFR_SF_qddq.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall FxWmiInstanceExternal::QueryInstance(
        FxWmiInstanceExternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  char *v4; // rbx
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, void *, unsigned int *); // rax
  unsigned __int16 v9; // dx
  const void *_a1; // rbp
  unsigned __int8 *v11; // r12
  unsigned __int64 v12; // rcx
  unsigned int v13; // r15d
  unsigned __int8 v14; // dl
  unsigned int v15; // esi
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  int v18; // eax
  int (__fastcall *_a2)(WDFWMIINSTANCE__ *, unsigned int, unsigned int, unsigned int, void *, unsigned int *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxWmiProvider *m_Provider; // rcx
  int flags; // edx
  unsigned __int16 v24; // ax
  const void *id; // rcx
  size_t m_ContextLength; // rdx
  __int64 m_ObjectSize; // rcx
  const void *v28; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  unsigned __int8 dummy[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( this->m_UseContextForQuery )
  {
    *BufferUsed = this->m_ContextLength;
    m_ContextLength = this->m_ContextLength;
    m_ObjectSize = this->m_ObjectSize;
    if ( OutBufferSize >= (unsigned int)m_ContextLength )
    {
      v15 = 0;
      if ( (_WORD)m_ObjectSize )
        v4 = (char *)this + m_ObjectSize;
      memmove(OutBuffer, v4 + 48, m_ContextLength);
    }
    else
    {
      v15 = -1073741789;
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_qddd(
        this->m_Globals,
        m_ContextLength,
        0x12u,
        0x12u,
        WPP_FxWmiInstance_cpp_Traceguids,
        v28,
        OutBufferSize,
        m_ContextLength,
        -1073741789);
    }
  }
  else
  {
    m_Method = this->m_QueryInstanceCallback.m_Method;
    v9 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_Method )
    {
      _a2 = this->m_ExecuteMethodCallback.m_Method;
      m_Globals = this->m_Globals;
      if ( !v9 )
        _a1 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 2u, 0xCu, 0x17u, WPP_FxWmiInstance_cpp_Traceguids, _a1, _a2);
      v15 = 0;
      goto LABEL_18;
    }
    dummy[0] = 0;
    v11 = dummy;
    v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( OutBufferSize )
      v11 = (unsigned __int8 *)OutBuffer;
    v13 = 1;
    if ( OutBufferSize )
      v13 = OutBufferSize;
    if ( !v9 )
      v12 = 0LL;
    v15 = m_Method((WDFWMIINSTANCE__ *)v12, v13, v11, BufferUsed);
    if ( v15 == 259 )
    {
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiInstance_cpp_Traceguids, _a1, 259);
LABEL_17:
      FxVerifierDbgBreakPoint(this->m_Globals);
      v15 = -1073741823;
LABEL_18:
      *BufferUsed = 0;
      return v15;
    }
    if ( (v15 & 0x80000000) == 0 )
    {
      v18 = *BufferUsed;
      if ( *BufferUsed <= v13 )
      {
        if ( v11 == dummy && v18 )
          return (unsigned int)-1073741789;
        return v15;
      }
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qddd(this->m_Globals, v14, 0xCu, 0x14u, WPP_FxWmiInstance_cpp_Traceguids, _a1, v13, v18, v15);
      goto LABEL_17;
    }
    if ( v15 == -1073741789 )
    {
      m_Provider = this->m_Provider;
      flags = m_Provider->m_MinInstanceBufferSize;
      if ( flags )
      {
        v24 = m_Provider->m_ObjectSize;
        id = (const void *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v24 )
          id = 0LL;
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qddq(this->m_Globals, flags, v16, v17, traceGuid, _a1, -1073741789, flags, id);
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiInstance_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  return v15;
}
