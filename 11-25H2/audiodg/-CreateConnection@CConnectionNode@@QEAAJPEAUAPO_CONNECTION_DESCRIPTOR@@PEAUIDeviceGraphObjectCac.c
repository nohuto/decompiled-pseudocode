/*
 * XREFs of ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x14000D58C
 * Callers:
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000D230 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CD90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D010 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ?GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000EEA4 (-GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14003DC4C (-CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionNode::CreateConnection(
        CConnectionNode *this,
        struct APO_CONNECTION_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3)
{
  void *v6; // rax
  int v7; // r8d
  void *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r9
  int v11; // r10d
  __int64 (__fastcall *v13)(struct IDeviceGraphObjectCache *, int *, char *); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  void *v16; // rax
  int v17; // r8d
  void *v18; // rax
  int v19; // r8d
  int v20[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  CConnectionNode *v22; // [rsp+30h] [rbp-18h]
  char v23; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  GetAudioFormat(a2->pFormat, (struct _UNCOMPRESSEDAUDIOFORMAT *)((char *)this + 24));
  v6 = (void *)AERTGetDLLRTHeap();
  v8 = AERTAllocate(0x28uLL, v6, v7);
  *((_QWORD *)this + 13) = v8;
  if ( v8 )
  {
    v22 = this;
    v23 = 1;
    *((_OWORD *)this + 4) = *(_OWORD *)&a2->Type;
    *((_OWORD *)this + 5) = *(_OWORD *)&a2->u32MaxFrameCount;
    *((_QWORD *)this + 12) = *(_QWORD *)&a2->u32Signature;
    if ( *((_QWORD *)this + 9) )
    {
      v9 = CalculateAlignmentMask((const struct _UNCOMPRESSEDAUDIOFORMAT *)((char *)this + 24));
      if ( (v9 & (unsigned int)v10) == 0 )
      {
LABEL_4:
        *((_DWORD *)this + 16) = v11;
        **((_QWORD **)this + 13) = v10;
        *(_DWORD *)(*((_QWORD *)this + 13) + 8LL) = 0;
        *(_DWORD *)(*((_QWORD *)this + 13) + 16LL) = 1094930505;
        *(_QWORD *)(*((_QWORD *)this + 13) + 24LL) = 0LL;
        *(_DWORD *)(*((_QWORD *)this + 13) + 32LL) = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 8LL))(*((_QWORD *)this + 11));
        return 0LL;
      }
      v15 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
        (const char *)0x80004003LL);
      v18 = (void *)AERTGetDLLRTHeap();
      AERTFree(*((void **)this + 13), v18, v19);
      *((_QWORD *)this + 13) = 0LL;
    }
    else
    {
      v20[1] = 0;
      v20[0] = *((_DWORD *)this + 20);
      v21 = *((_QWORD *)this + 11);
      v13 = *(__int64 (__fastcall **)(struct IDeviceGraphObjectCache *, int *, char *))(*(_QWORD *)a3 + 40LL);
      wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((char *)this + 144);
      v14 = v13(a3, v20, (char *)this + 144);
      v15 = v14;
      if ( v14 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18));
        *((_QWORD *)this + 9) = v10;
        v11 = 0;
        goto LABEL_4;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFC,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
        (const char *)(unsigned int)v14);
      v16 = (void *)AERTGetDLLRTHeap();
      AERTFree(*((void **)this + 13), v16, v17);
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  else
  {
    v15 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF1,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)0x8007000ELL);
  }
  return v15;
}
