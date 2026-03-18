/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbUrbContext::StoreAndReferenceMemory(FxUsbUrbContext *this, FxRequestBuffer *Buffer)
{
  FxRequestBuffer::<unnamed_type_u> *p_u; // rdi
  IFxMemory *Memory; // rax
  _URB **p_m_pUrb; // rax
  char *v7; // rbx
  __int32 v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rbp
  _WDFMEMORY_OFFSET *Offsets; // rax
  _WDFMEMORY_OFFSET *v12; // rax
  unsigned __int64 BufferOffset; // rax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  p_u = &Buffer->u;
  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    v9 = 130LL;
  }
  else
  {
    if ( Buffer->DataType != FxRequestBufferReferencedMdl )
    {
      Memory = 0LL;
      goto LABEL_4;
    }
    v9 = 135LL;
  }
  p_u->Memory.Memory->AddRef(
    p_u->Memory.Memory,
    this,
    v9,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  Memory = p_u->Memory.Memory;
LABEL_4:
  this->m_RequestMemory = Memory;
  p_m_pUrb = &this->m_pUrb;
  v7 = &v14;
  if ( p_m_pUrb )
    v7 = (char *)p_m_pUrb;
  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    v10 = (__int64)p_u->Memory.Memory->GetBuffer(p_u->Memory.Memory);
    p_u->Memory.Memory->GetBufferSize(p_u->Memory.Memory);
    Offsets = Buffer->u.Memory.Offsets;
    if ( Offsets )
    {
      BufferOffset = Offsets->BufferOffset;
      if ( BufferOffset )
        v10 += BufferOffset;
    }
    *(_QWORD *)v7 = v10;
  }
  else if ( Buffer->DataType == FxRequestBufferMdl )
  {
    *(_QWORD *)v7 = 0LL;
  }
  else
  {
    v8 = Buffer->DataType - 3;
    if ( Buffer->DataType == FxRequestBufferBuffer )
    {
      *(_QWORD *)v7 = p_u->Memory.Memory;
    }
    else
    {
      *(_QWORD *)v7 = 0LL;
      if ( v8 == 1 )
      {
        v12 = Buffer->u.Memory.Offsets;
        if ( !v12 || !v12->BufferLength )
          p_u->Memory.Memory->GetBufferSize(p_u->Memory.Memory);
      }
    }
  }
}
