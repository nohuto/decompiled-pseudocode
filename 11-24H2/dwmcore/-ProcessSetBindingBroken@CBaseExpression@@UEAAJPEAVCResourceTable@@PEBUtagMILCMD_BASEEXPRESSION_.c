/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180153340
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800159A0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1801537A8 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x180153BD0 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int (__fastcall *v6)(CResource *__hidden); // rax
  unsigned int OwningProcessId; // eax
  int v9; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  _DWORD *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  int *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  if ( (*((_BYTE *)this + 224) & 2) != 0 )
  {
    v4 = CBaseExpression::NotifyAnimationDisconnected(this);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x18Au, 0LL);
      return v5;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
  }
  *((_BYTE *)this + 224) |= 4u;
  if ( (unsigned int)dword_1803F8D18 > 5 && (byte_1803F8D28 & 4) != 0 && (qword_1803F8D30 & 4) == qword_1803F8D30 )
  {
    v9 = *((_DWORD *)this + 18);
    v6 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 144LL);
    if ( v6 == CResource::GetOwningProcessId )
      OwningProcessId = CResource::GetOwningProcessId(this);
    else
      OwningProcessId = ((__int64 (__fastcall *)(CBaseExpression *, struct CResourceTable *, const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *))v6)(
                          this,
                          a2,
                          a3);
    v21 = 0;
    v18 = 0;
    v10[0] = OwningProcessId;
    v20 = 4;
    v19 = &v9;
    v17 = 4;
    v16 = v10;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1803F8D20;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 4LL;
    UserData.Size = *(unsigned __int16 *)off_1803F8D20;
    v13 = &unk_1803CEC6D;
    UserData.Reserved = 2;
    v14 = 67;
    v15 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0;
}
