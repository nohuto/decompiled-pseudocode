/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801534F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800159A0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1801537A8 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x180153BD0 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180153C54 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180154180 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x180298BB4 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1CExpressionValueStack@@QEAA@XZ @ 0x1802AA5B4 (--1CExpressionValueStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rax
  const struct CExpressionValue *v9; // rdi
  int v10; // eax
  unsigned int (__fastcall *v11)(CResource *__hidden); // rax
  unsigned int OwningProcessId; // eax
  int v14; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v15[3]; // [rsp+34h] [rbp-75h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v17[64]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v18; // [rsp+90h] [rbp-19h] BYREF
  int v19; // [rsp+98h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v21; // [rsp+B0h] [rbp+7h]
  _DWORD *v22; // [rsp+C0h] [rbp+17h]
  __int64 v23; // [rsp+C8h] [rbp+1Fh]
  int *v24; // [rsp+D0h] [rbp+27h]
  __int64 v25; // [rsp+D8h] [rbp+2Fh]

  *((_BYTE *)this + 536) &= ~1u;
  if ( (*((_BYTE *)this + 224) & 2) == 0 )
    goto LABEL_11;
  v5 = CBaseExpression::NotifyAnimationDisconnected(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x218u, 0LL);
    return v6;
  }
  if ( *((_BYTE *)a3 + 8) && (unsigned int)(*((_DWORD *)this + 129) - 1) <= 1 )
  {
    UserData.Ptr = *(_QWORD *)(*((_QWORD *)this + 3) + 824LL);
    UserData.Size = 0;
    v21 = 0LL;
    v22 = 0LL;
    LODWORD(v23) = 0;
    v7 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)&UserData);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x221u, 0LL);
    }
    else
    {
      v8 = UserData.Size - 1;
      if ( (unsigned int)v8 >= (unsigned int)v23 )
      {
        memset_0(v17, 0, sizeof(v17));
        v9 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
        v18 = 0LL;
        v19 = 0;
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v17);
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v18);
      }
      else
      {
        v9 = (const struct CExpressionValue *)(v21 + 80 * v8);
      }
      v10 = CBaseExpression::SetOutputValue(this, v9);
      v6 = v10;
      if ( v10 >= 0 )
      {
        --UserData.Size;
        CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)&UserData);
        goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x224u, 0LL);
    }
    CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)&UserData);
    return v6;
  }
LABEL_10:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
LABEL_11:
  *((_BYTE *)this + 224) |= 4u;
  if ( (unsigned int)dword_1803F8D18 > 5 && (byte_1803F8D28 & 4) != 0 && (qword_1803F8D30 & 4) == qword_1803F8D30 )
  {
    v14 = *((_DWORD *)this + 18);
    v11 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 144LL);
    if ( v11 == CResource::GetOwningProcessId )
      OwningProcessId = CResource::GetOwningProcessId(this);
    else
      OwningProcessId = ((__int64 (__fastcall *)(CKeyframeAnimation *, struct CResourceTable *))v11)(this, a2);
    v15[0] = OwningProcessId;
    v25 = 4LL;
    v24 = &v14;
    v23 = 4LL;
    v22 = v15;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1803F8D20;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 4LL;
    UserData.Size = *(unsigned __int16 *)off_1803F8D20;
    *(_QWORD *)&v21 = &unk_1803CE51F;
    UserData.Reserved = 2;
    *((_QWORD *)&v21 + 1) = 0x100000046LL;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0;
}
