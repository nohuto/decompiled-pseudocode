/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003D190
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003C798 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18003CBC0 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180060420 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3,
        __int64 a4)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(CResource *); // rax
  int OwningProcessId; // eax
  int v10; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  _DWORD *v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]
  int *v20; // [rsp+80h] [rbp+37h]
  int v21; // [rsp+88h] [rbp+3Fh]
  int v22; // [rsp+8Ch] [rbp+43h]

  if ( (*((_BYTE *)this + 224) & 2) != 0 )
  {
    v5 = CBaseExpression::NotifyAnimationDisconnected(this, (__int64)a2, (__int64)a3, a4);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x188u, 0LL);
      return v6;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
  }
  *((_BYTE *)this + 224) |= 4u;
  if ( (unsigned int)dword_180404D18 > 5 && (byte_180404D28 & 4) != 0 && (qword_180404D30 & 4) == qword_180404D30 )
  {
    v10 = *((_DWORD *)this + 18);
    v7 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)this + 144LL);
    if ( v7 == CResource::GetOwningProcessId )
      OwningProcessId = CResource::GetOwningProcessId(this);
    else
      OwningProcessId = ((__int64 (__fastcall *)(CBaseExpression *, struct CResourceTable *, const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *))v7)(
                          this,
                          a2,
                          a3);
    v22 = 0;
    v19 = 0;
    v11[0] = OwningProcessId;
    v21 = 4;
    v20 = &v10;
    v18 = 4;
    v17 = v11;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_180404D20;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 4LL;
    UserData.Size = *(unsigned __int16 *)off_180404D20;
    v14 = &unk_1803D9C68;
    UserData.Reserved = 2;
    v15 = 67;
    v16 = 1;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0;
}
