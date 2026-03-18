/*
 * XREFs of ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003C798
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003CBE0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003D190 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1802AA4B0 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180032F08 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x18003AFE0 (-IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18003CBC0 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationDisconnected(
        CBaseExpression *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int (__fastcall *v13)(CMILRefCountImpl *__hidden); // rax
  unsigned int (__fastcall *v14)(CResource *__hidden); // rax
  unsigned int OwningProcessId; // eax
  bool (__fastcall *v16)(CKeyframeAnimation *); // rax
  bool IsAutoCompleteOnScreenOccluded; // al
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // r14
  __int64 v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v33; // eax
  int v34; // r14d
  int v35; // r10d
  unsigned int v36; // eax
  int v37; // r12d
  __int128 *v38; // [rsp+38h] [rbp-39h] BYREF
  int v39; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v40; // [rsp+44h] [rbp-2Dh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-29h] BYREF
  __int128 v42; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v44; // [rsp+78h] [rbp+7h]
  int v45; // [rsp+80h] [rbp+Fh]
  int v46; // [rsp+84h] [rbp+13h]
  unsigned int *v47; // [rsp+88h] [rbp+17h]
  __int64 v48; // [rsp+90h] [rbp+1Fh]
  int *v49; // [rsp+98h] [rbp+27h]
  __int64 v50; // [rsp+A0h] [rbp+2Fh]

  v4 = *((_QWORD *)this + 7);
  v5 = 0LL;
  v7 = 0;
  if ( !v4 || !*(_DWORD *)(v4 + 108) || !*((_DWORD *)this + 18) )
  {
    v8 = *((_QWORD *)this + 4);
    if ( !((v8 & 2) != 0 ? *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)this + 4) & 1LL) )
      goto LABEL_20;
  }
  if ( *((int *)this + 2) > 0 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 224LL;
    LODWORD(v42) = 8;
    *((_QWORD *)&v42 + 1) = this;
    v11 = *(_DWORD *)(v10 + 24);
    v12 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
      v7 = -2147024362;
      v36 = 181;
      v34 = -2147024362;
      v37 = -2147024362;
      v35 = -2147024362;
    }
    else
    {
      if ( v12 <= *(_DWORD *)(v10 + 20) )
      {
        *(_OWORD *)(*(_QWORD *)v10 + 16LL * v11) = v42;
        *(_DWORD *)(v10 + 24) = v12;
        goto LABEL_12;
      }
      v38 = &v42;
      v33 = DynArrayImpl<1>::Grow(v10, 0x10u, 1, a4, (unsigned __int64 *)&v38);
      v34 = v33;
      v35 = v33;
      if ( v33 >= 0 )
      {
        *(_OWORD *)((unsigned int)(16 * (*(_DWORD *)(v10 + 24))++) + *(_QWORD *)v10) = *v38;
LABEL_12:
        v13 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)this + 8LL);
        if ( v13 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(this);
        else
          v13(this);
        goto LABEL_14;
      }
      v7 = v33;
      v37 = v33;
      v36 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, v36, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x27Bu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x573u, 0LL);
    goto LABEL_39;
  }
LABEL_14:
  v7 = 0;
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 4) != 0 && (qword_180404D30 & 4) == qword_180404D30 )
  {
    v39 = *((_DWORD *)this + 18);
    v14 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 144LL);
    if ( v14 == CResource::GetOwningProcessId )
      OwningProcessId = CResource::GetOwningProcessId(this);
    else
      OwningProcessId = v14(this);
    v40 = OwningProcessId;
    v50 = 4LL;
    v49 = &v39;
    v48 = 4LL;
    v47 = &v40;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_180404D20;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 4LL;
    UserData.Size = *(unsigned __int16 *)off_180404D20;
    v44 = &unk_1803D9B92;
    UserData.Reserved = 2;
    v45 = 71;
    v46 = 1;
    LODWORD(v38) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
LABEL_20:
  v16 = *(bool (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 240LL);
  if ( v16 == CKeyframeAnimation::IsAutoCompleteOnScreenOccluded )
    IsAutoCompleteOnScreenOccluded = CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(this);
  else
    IsAutoCompleteOnScreenOccluded = v16(this);
  if ( IsAutoCompleteOnScreenOccluded )
  {
    v18 = *((_QWORD *)this + 3);
    v19 = 0xCBF29CE484222325uLL;
    *(_QWORD *)&EventDescriptor.Id = this;
    v20 = 0xCBF29CE484222325uLL;
    v21 = 0LL;
    v22 = *(_QWORD **)(v18 + 824);
    do
    {
      v23 = *((unsigned __int8 *)&EventDescriptor.Id + v21++);
      v20 = 0x100000001B3LL * (v23 ^ v20);
    }
    while ( v21 < 8 );
    v24 = v22[68];
    v25 = (_QWORD *)v22[66];
    v26 = *(_QWORD *)(v24 + 16 * (v20 & v22[71]) + 8);
    if ( (_QWORD *)v26 == v25 )
    {
LABEL_29:
      v26 = 0LL;
    }
    else
    {
      v27 = *(_QWORD *)(v24 + 16 * (v20 & v22[71]));
      while ( this != *(CBaseExpression **)(v26 + 16) )
      {
        if ( v26 == v27 )
          goto LABEL_29;
        v26 = *(_QWORD *)(v26 + 8);
      }
    }
    v28 = (_QWORD *)v22[66];
    if ( v26 )
      v28 = (_QWORD *)v26;
    if ( v28 != v25 )
    {
      do
      {
        v29 = *((unsigned __int8 *)v28 + v5++ + 16);
        v19 = 0x100000001B3LL * (v29 ^ v19);
      }
      while ( v5 < 8 );
      v30 = 2 * (v19 & v22[71]);
      if ( *(_QWORD **)(v24 + 16 * (v19 & v22[71]) + 8) == v28 )
      {
        if ( *(_QWORD **)(v24 + 16 * (v19 & v22[71])) == v28 )
          *(_QWORD *)(v24 + 16 * (v19 & v22[71])) = v25;
        else
          v25 = (_QWORD *)v28[1];
        *(_QWORD *)(v24 + 8 * v30 + 8) = v25;
      }
      else if ( *(_QWORD **)(v24 + 16 * (v19 & v22[71])) == v28 )
      {
        *(_QWORD *)(v24 + 16 * (v19 & v22[71])) = *v28;
      }
      v31 = *v28;
      --v22[67];
      *(_QWORD *)v28[1] = v31;
      *(_QWORD *)(v31 + 8) = v28[1];
      operator delete(v28, 0x18uLL);
    }
  }
LABEL_39:
  *((_DWORD *)this + 57) = 8;
  return v7;
}
