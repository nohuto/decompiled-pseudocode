/*
 * XREFs of ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18029FE60
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1802A023C (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180079AD0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180079E78 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18012E320 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CGeometryGroup::ProcessAppend(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRYGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // r8d
  int v7; // eax
  void *v8; // rbp
  unsigned int v9; // ebx
  unsigned __int64 v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // r15d
  int v13; // eax
  char *v14; // rsi
  unsigned int v15; // eax
  void *v16; // rcx
  unsigned __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  LODWORD(v18) = 0;
  Src = 0LL;
  v7 = CResource::UnmarshalResourceArray(a4, a5, v5, 0x42u, (unsigned int *)&v18, &Src, (__int64)a2, 0);
  v8 = Src;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x11Du, 0LL);
LABEL_19:
    if ( v8 )
      operator delete(v8);
    return v9;
  }
  v10 = (unsigned int)v18;
  if ( !(_DWORD)v18 )
    return v9;
  v11 = *((_DWORD *)this + 40);
  v12 = v11 + v18;
  if ( v11 + (unsigned int)v18 < v11 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x123u, 0LL);
    goto LABEL_19;
  }
  v13 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v18);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x126u, 0LL);
    goto LABEL_19;
  }
  if ( !v12 || 0xFFFFFFFFFFFFFFFFuLL / v12 <= 8 )
  {
    v9 = -2147024809;
    goto LABEL_15;
  }
  v14 = (char *)DefaultHeap::AllocClear(8LL * v12);
  if ( !v14 )
  {
    v9 = -2147024882;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x12Cu, 0LL);
    CResource::UnRegisterNNotifiersInternal(this, (struct CResource **)v8, v10);
    goto LABEL_19;
  }
  v15 = *((_DWORD *)this + 40);
  v9 = 0;
  if ( v15 )
    memcpy_0(v14, *((const void **)this + 21), 8LL * v15);
  memcpy_0(&v14[8 * *((unsigned int *)this + 40)], v8, 8 * v10);
  v16 = (void *)*((_QWORD *)this + 21);
  if ( v16 )
    operator delete(v16);
  *((_QWORD *)this + 21) = v14;
  *((_DWORD *)this + 40) = v12;
  operator delete(v8);
  return v9;
}
