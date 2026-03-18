/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x18029D750
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1801B9698 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x18020D4DC (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18029D210 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x18029D24C (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18029D3A4 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x18029DA04 (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_FILTEREFFECT_UPDATEINPUTS *a3,
        char *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rbx
  int v8; // eax
  const struct tagMILCMD_FILTEREFFECT_UPDATEINPUTS *v9; // r10
  CResourceTable *v10; // r11
  int v11; // edi
  unsigned int i; // ebp
  struct CResource *ResourceWithoutType; // rsi
  __int64 v14; // rbx
  char *v15; // r14
  unsigned int v16; // edx
  char *v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // edi
  unsigned int v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  v25 = 0LL;
  v8 = ULongLongMult(*((unsigned int *)a3 + 3), 0x1CuLL, &v25);
  v11 = v8;
  if ( v8 < 0 )
  {
    v22 = 682;
LABEL_40:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v22, 0LL);
    goto LABEL_41;
  }
  if ( v25 == a5 )
  {
    if ( !a4 )
    {
LABEL_37:
      if ( v11 >= 0 )
        goto LABEL_42;
      goto LABEL_41;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= *((_DWORD *)v9 + 3) )
        goto LABEL_37;
      ResourceWithoutType = 0LL;
      v14 = 0LL;
      v15 = &a4[28 * i];
      while ( v14 < *((int *)this + 38) )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 17) + 4 * v14) == *(_DWORD *)v15 )
        {
          if ( v14 != -1 )
          {
            v5 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v14);
            goto LABEL_14;
          }
          break;
        }
        ++v14;
      }
      v5 = 0LL;
LABEL_14:
      if ( (v15[24] & 2) != 0 )
      {
        if ( !v5 )
          goto LABEL_32;
        CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
          (char *)this + 136,
          *(unsigned int *)v15);
        InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v5);
      }
      else
      {
        v16 = *((_DWORD *)v15 + 1);
        if ( v16 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(v10, v16);
          if ( !ResourceWithoutType )
          {
            v11 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x2CBu, 0LL);
            goto LABEL_41;
          }
        }
        if ( v5 )
        {
          CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v5 + 24));
          v19 = *(_QWORD *)(v5 + 24);
          v20 = *((_DWORD *)v15 + 6);
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          *(_QWORD *)(v5 + 24) = ResourceWithoutType;
          if ( ResourceWithoutType )
            (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          *(_DWORD *)v5 = v20;
          *(_OWORD *)(v5 + 4) = *(_OWORD *)(v15 + 8);
        }
        else
        {
          v17 = (char *)operator new(0x20uLL);
          v18 = (unsigned __int64)v17;
          if ( !v17 )
          {
            v5 = 0LL;
            v11 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2D2u, 0LL);
            goto LABEL_41;
          }
          *(_DWORD *)v17 = *((_DWORD *)v15 + 6);
          *(_OWORD *)(v17 + 4) = *(_OWORD *)(v15 + 8);
          *((_QWORD *)v17 + 3) = ResourceWithoutType;
          if ( ResourceWithoutType )
            (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          v25 = v18;
          if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                                (__int64)this + 136,
                                v15,
                                &v25) )
          {
            v11 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2D5u, 0LL);
            v5 = v25;
            goto LABEL_41;
          }
          v5 = v25;
        }
        v8 = CResource::RegisterNotifier(this, *(struct CResource **)(v5 + 24));
        v11 = v8;
        if ( v8 < 0 )
        {
          v22 = 743;
          goto LABEL_40;
        }
      }
      v10 = a2;
      v9 = a3;
LABEL_32:
      v5 = 0LL;
    }
  }
  v11 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x2AEu, 0LL);
LABEL_41:
  CFilterEffect::EmptyFilterInputMap(this);
LABEL_42:
  if ( v5 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v5);
  return (unsigned int)v11;
}
