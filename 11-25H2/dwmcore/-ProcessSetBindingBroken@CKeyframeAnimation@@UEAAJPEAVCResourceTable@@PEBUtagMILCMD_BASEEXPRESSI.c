/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003CBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180034A90 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003C798 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18003CBC0 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003CE98 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180060420 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1CExpressionValueStack@@QEAA@XZ @ 0x1802B4074 (--1CExpressionValueStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  const struct CExpressionValue *v10; // rdi
  int v11; // eax
  __int64 (__fastcall *v12)(CResource *); // rax
  int OwningProcessId; // eax
  int v15; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-75h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v19; // [rsp+90h] [rbp-19h] BYREF
  int v20; // [rsp+98h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v22; // [rsp+B0h] [rbp+7h]
  _DWORD *v23; // [rsp+C0h] [rbp+17h]
  __int64 v24; // [rsp+C8h] [rbp+1Fh]
  int *v25; // [rsp+D0h] [rbp+27h]
  __int64 v26; // [rsp+D8h] [rbp+2Fh]

  *((_BYTE *)this + 536) &= ~1u;
  if ( (*((_BYTE *)this + 224) & 2) == 0 )
    goto LABEL_11;
  v6 = CBaseExpression::NotifyAnimationDisconnected(this, (__int64)a2, (__int64)a3, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x218u, 0LL);
    return v7;
  }
  if ( *((_BYTE *)a3 + 8) && (unsigned int)(*((_DWORD *)this + 129) - 1) <= 1 )
  {
    UserData.Ptr = *(_QWORD *)(*((_QWORD *)this + 3) + 824LL);
    UserData.Size = 0;
    v22 = 0LL;
    v23 = 0LL;
    LODWORD(v24) = 0;
    v8 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)&UserData);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x221u, 0LL);
    }
    else
    {
      v9 = UserData.Size - 1;
      if ( (unsigned int)v9 >= (unsigned int)v24 )
      {
        memset_0(v18, 0, sizeof(v18));
        v10 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
        v19 = 0LL;
        v20 = 0;
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v18);
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v19);
      }
      else
      {
        v10 = (const struct CExpressionValue *)(v22 + 80 * v9);
      }
      v11 = CBaseExpression::SetOutputValue(this, v10);
      v7 = v11;
      if ( v11 >= 0 )
      {
        --UserData.Size;
        CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)&UserData);
        goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x224u, 0LL);
    }
    CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)&UserData);
    return v7;
  }
LABEL_10:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
LABEL_11:
  *((_BYTE *)this + 224) |= 4u;
  if ( (unsigned int)dword_180404D18 > 5 && (byte_180404D28 & 4) != 0 && (qword_180404D30 & 4) == qword_180404D30 )
  {
    v15 = *((_DWORD *)this + 18);
    v12 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)this + 144LL);
    if ( v12 == CResource::GetOwningProcessId )
      OwningProcessId = CResource::GetOwningProcessId(this);
    else
      OwningProcessId = ((__int64 (__fastcall *)(CKeyframeAnimation *, struct CResourceTable *))v12)(this, a2);
    v16[0] = OwningProcessId;
    v26 = 4LL;
    v25 = &v15;
    v24 = 4LL;
    v23 = v16;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_180404D20;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 4LL;
    UserData.Size = *(unsigned __int16 *)off_180404D20;
    *(_QWORD *)&v22 = &unk_1803D9497;
    UserData.Reserved = 2;
    *((_QWORD *)&v22 + 1) = 0x100000046LL;
    v16[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0;
}
