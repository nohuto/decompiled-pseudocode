/*
 * XREFs of ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1801D764C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetInsetProperty(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *a3)
{
  int v3; // edx
  unsigned int v4; // edi
  float v5; // xmm0_4
  unsigned int v7; // r14d
  __int64 v8; // rax
  float *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  struct _RTL_GENERIC_TABLE *v12; // rcx
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  void (__fastcall *v16)(__int64, unsigned int, __int64); // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int Buffer; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]
  int v23; // [rsp+50h] [rbp-18h]

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  v5 = *((float *)a3 + 3);
  v7 = 0;
  if ( v3 )
  {
    switch ( v3 )
    {
      case 1:
        v8 = 140LL;
        break;
      case 3:
        v8 = 112LL;
        break;
      case 4:
        v8 = 116LL;
        break;
      case 5:
        v8 = 128LL;
        break;
      case 6:
        v8 = 132LL;
        break;
      case 8:
        v8 = 120LL;
        break;
      case 9:
        v8 = 124LL;
        break;
      default:
LABEL_49:
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x147u, 0LL);
        return v7;
    }
  }
  else
  {
    v8 = 136LL;
  }
  if ( !(CNineGridBrush *)((char *)this + v8) || v5 < 0.0 )
    goto LABEL_49;
  if ( v3 )
  {
    switch ( v3 )
    {
      case 1:
        v9 = (float *)((char *)this + 140);
        break;
      case 3:
        v9 = (float *)((char *)this + 112);
        break;
      case 4:
        v9 = (float *)((char *)this + 116);
        break;
      case 5:
        v9 = (float *)((char *)this + 128);
        break;
      case 6:
        v9 = (float *)((char *)this + 132);
        break;
      case 8:
        v9 = (float *)((char *)this + 120);
        break;
      default:
        v9 = (float *)((char *)this + 124);
        break;
    }
  }
  else
  {
    v9 = (float *)((char *)this + 136);
  }
  if ( v5 != *v9 )
  {
    *v9 = v5;
    v10 = *((_QWORD *)this + 3);
    v11 = *(_QWORD *)(v10 + 888);
    if ( v11 == *(_QWORD *)(v10 + 896) )
    {
      v19 = v11 + 1;
      v11 = 1LL;
      if ( v19 )
        v11 = v19;
    }
    v12 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v13 = 0LL;
    if ( v12 )
    {
      Buffer = v3;
      v22 = 0LL;
      v21 = 0LL;
      v23 = 0;
      v13 = (__int64)RtlLookupElementGenericTable(v12, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v21);
    }
    v14 = v13 + 8;
    v15 = -v13;
    if ( (v14 & -(__int64)(v15 != 0)) != 0 )
    {
      if ( *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x18) )
      {
        do
        {
          v18 = v4++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & -(__int64)(v15 != 0)) + 8 * v18) + 232LL) = v11;
        }
        while ( v4 < *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x18) );
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 8u);
    }
    v16 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)this + 80LL);
    if ( v16 == CBrush::NotifyOnChanged )
      CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
    else
      v16((__int64)this, 6u, (__int64)this);
  }
  return v7;
}
