/*
 * XREFs of ?UpdateFastestMonitor@CRenderTargetManager@@AEAA_NXZ @ 0x18013E6B0
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18013E9A0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CRenderTargetManager::UpdateFastestMonitor(CRenderTargetManager *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rsi
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  bool result; // al
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  _QWORD *v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  bool v15; // zf

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  v2 = (_QWORD *)((char *)this + 8);
  v4 = *((_QWORD *)this + 1);
  v5 = (__int64)(*((_QWORD *)this + 4) - (_QWORD)v1) >> 3;
  if ( v5 > 1 )
  {
    v8 = *(_QWORD *)this;
    v9 = -1LL;
    *((_QWORD *)this + 2) = 0LL;
    *v2 = v8;
    v10 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v1 != v10 )
    {
      v11 = *v1;
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 168LL))(*v1);
      v13 = v12;
      if ( v12 )
      {
        if ( !*((_QWORD *)this + 2) || v12 > *((_QWORD *)this + 2) )
          *((_QWORD *)this + 2) = v12;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 176LL))(v11) )
        {
          if ( v13 == v9 )
          {
            if ( v11 == *(_QWORD *)this )
              *v2 = *(_QWORD *)this;
          }
          else if ( v13 < v9 )
          {
            v9 = v13;
            *v2 = v11;
          }
        }
      }
      ++v1;
    }
    if ( *((_BYTE *)this + 752) )
    {
      v14 = *((_QWORD *)this + 1);
      if ( v14 != *(_QWORD *)this )
      {
        v15 = CCommonRegistryData::m_compositorClockPolicy == 0;
        *(_QWORD *)this = v14;
        if ( v15 )
          *((_BYTE *)g_pComposition + 6492) = 1;
      }
    }
    v2 = (_QWORD *)((char *)this + 8);
  }
  else if ( v5 == 1 )
  {
    v6 = *v1;
    *v2 = *v1;
    *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
  }
  else
  {
    *v2 = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  result = *v2 != v4;
  *((_BYTE *)this + 748) = 0;
  return result;
}
