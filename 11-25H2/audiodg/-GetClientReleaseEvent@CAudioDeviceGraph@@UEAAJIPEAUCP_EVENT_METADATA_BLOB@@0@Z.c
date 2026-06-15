/*
 * XREFs of ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140064740
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetClientReleaseEvent(
        CAudioDeviceGraph *this,
        __int64 a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  struct CP_EVENT_METADATA_BLOB *v4; // rsi
  struct CP_EVENT_METADATA_BLOB *v5; // r14
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // r12d
  __int64 v14; // rdi
  void (__fastcall *v15)(__int64, _BYTE *, __int64 *); // rbx
  _OWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rax
  __int64 v21; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v23[304]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v24[304]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]
  __int64 v26; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = a4;
  v5 = a3;
  if ( *((_QWORD *)this + 19) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)a4 = 0;
    v21 = 0LL;
    v26 = 0LL;
    v8 = *((_QWORD *)this + 19);
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v8 + 72LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset(&v26);
    wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset(&v21);
    v10 = v9(v8, &v21, &v26);
    v7 = v10;
    if ( v10 >= 0 )
    {
      memset_0(v23, 0, 0x128uLL);
      if ( !v21
        || (v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v23), v7 = v10, v10 >= 0) )
      {
        memset_0(v24, 0, 0x128uLL);
        if ( v26
          && (v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 32LL))(v26, v24), v13 = v12, v12 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x23D,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v12);
          v22 = 0LL;
          v14 = *((_QWORD *)this + 49);
          v15 = *(void (__fastcall **)(__int64, _BYTE *, __int64 *))(*(_QWORD *)v14 + 40LL);
          wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset(&v22);
          v15(v14, v23, &v22);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
          v7 = v13;
        }
        else
        {
          v16 = v23;
          v17 = 2LL;
          v18 = 2LL;
          do
          {
            *(_OWORD *)v5 = *v16;
            *((_OWORD *)v5 + 1) = v16[1];
            *((_OWORD *)v5 + 2) = v16[2];
            *((_OWORD *)v5 + 3) = v16[3];
            *((_OWORD *)v5 + 4) = v16[4];
            *((_OWORD *)v5 + 5) = v16[5];
            *((_OWORD *)v5 + 6) = v16[6];
            v5 = (struct CP_EVENT_METADATA_BLOB *)((char *)v5 + 128);
            *((_OWORD *)v5 - 1) = v16[7];
            v16 += 8;
            --v18;
          }
          while ( v18 );
          *(_OWORD *)v5 = *v16;
          *((_OWORD *)v5 + 1) = v16[1];
          *((_QWORD *)v5 + 4) = *((_QWORD *)v16 + 4);
          v19 = v24;
          do
          {
            *(_OWORD *)v4 = *v19;
            *((_OWORD *)v4 + 1) = v19[1];
            *((_OWORD *)v4 + 2) = v19[2];
            *((_OWORD *)v4 + 3) = v19[3];
            *((_OWORD *)v4 + 4) = v19[4];
            *((_OWORD *)v4 + 5) = v19[5];
            *((_OWORD *)v4 + 6) = v19[6];
            v4 = (struct CP_EVENT_METADATA_BLOB *)((char *)v4 + 128);
            *((_OWORD *)v4 - 1) = v19[7];
            v19 += 8;
            --v17;
          }
          while ( v17 );
          *(_OWORD *)v4 = *v19;
          *((_OWORD *)v4 + 1) = v19[1];
          *((_QWORD *)v4 + 4) = *((_QWORD *)v19 + 4);
          v7 = 0;
        }
        goto LABEL_17;
      }
      v11 = 562LL;
    }
    else
    {
      v11 = 556LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v10);
LABEL_17:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
    return v7;
  }
  v7 = -2005139437;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x226,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)0x887C0013LL);
  return v7;
}
