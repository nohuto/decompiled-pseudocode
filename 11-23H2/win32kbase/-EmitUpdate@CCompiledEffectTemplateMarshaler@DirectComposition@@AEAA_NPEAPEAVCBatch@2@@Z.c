/*
 * XREFs of ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021BCC
 * Callers:
 *     ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021B80 (-EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BC70 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1C0086D6C (OpenDwmHandle.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::EmitUpdate(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // edx
  DirectComposition::CEvent *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  _DWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
    return 1;
  v14 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, (void **)&v14) )
  {
    v4 = v14;
    *v14 = 36;
    *(_OWORD *)(v4 + 1) = 0LL;
    *(_OWORD *)(v4 + 5) = 0LL;
    v4[1] = 60;
    v4[2] = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
      LODWORD(v5) = *(_DWORD *)(v5 + 32);
    v4[3] = v5;
    v4[4] = *((_DWORD *)this + 18);
    v4[5] = *((_DWORD *)this + 19);
    v6 = *((_QWORD *)this + 11);
    if ( v6 )
    {
      v7 = v4 + 7;
      if ( (int)OpenDwmHandle(*(PVOID *)(v6 + 8), (POBJECT_TYPE)ExEventObjectType, 2u, v13, (PHANDLE)(v4 + 7)) < 0 )
      {
        *v7 = 0LL;
        KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 11) + 8LL), 1, 0);
      }
      v9 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
      if ( v9 )
        DirectComposition::CEvent::`scalar deleting destructor'(v9, v8);
      *((_QWORD *)this + 11) = 0LL;
    }
    v10 = (_QWORD *)*((_QWORD *)this + 12);
    if ( v10 )
    {
      v11 = *((_QWORD *)*a2 + 1);
      *v10 = *(_QWORD *)(v11 + 208);
      *(_QWORD *)(v11 + 208) = v10;
      *((_QWORD *)this + 12) = 0LL;
    }
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  return 0;
}
