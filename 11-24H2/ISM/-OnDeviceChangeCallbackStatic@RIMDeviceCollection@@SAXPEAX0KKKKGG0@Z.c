/*
 * XREFs of ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x180086850
 * Callers:
 *     <none>
 * Callees:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18004A120 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180067F64 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x180080580 (-AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18008221C (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x180086A38 (-ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB118 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RIMDeviceCollection::OnDeviceChangeCallbackStatic(
        void *a1,
        void *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        RIMDeviceCollection *a9)
{
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int Device; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  RIMDeviceCollection *v16; // rcx
  RIMDeviceCollection *v17; // rbx
  DWORD v18; // edx
  void *v19; // rcx
  RIMDeviceCollection *v20; // rbx
  void *v21; // rcx
  struct RIMDevice **v22; // [rsp+20h] [rbp-18h]
  int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct RIMDevice *v25; // [rsp+40h] [rbp+8h] BYREF

  v10 = a4 - 2;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 == 1
          && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl) )
        {
          v25 = 0LL;
          Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v25, 0LL);
          if ( Device < 0 )
          {
            v15 = 407LL;
LABEL_8:
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v15,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
              (const char *)(unsigned int)Device,
              v23);
            return;
          }
          Device = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 72LL))(
                     v14,
                     *((unsigned int *)v25 + 10));
          if ( Device < 0 )
          {
            v15 = 409LL;
            goto LABEL_8;
          }
        }
      }
      else
      {
        v25 = 0LL;
        Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v25, 0LL);
        if ( Device < 0 )
        {
          v15 = 393LL;
          goto LABEL_8;
        }
        Device = RIMDeviceCollection::ResetDevice(v16, v25);
        if ( Device < 0 )
        {
          v15 = 395LL;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v17 = a9;
      v25 = 0LL;
      Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v25, 0LL);
      if ( Device < 0 )
      {
        v15 = 349LL;
        goto LABEL_8;
      }
      v19 = (void *)*((_QWORD *)v17 + 5);
      if ( v19 )
      {
        if ( !WaitForSingleObject(v19, v18) )
        {
          *((_BYTE *)v17 + 2736) = 1;
          Device = RIMDeviceCollection::OnReadCallbackStatic(v17, 0, 0LL);
          if ( Device < 0 )
          {
            v15 = 374LL;
            goto LABEL_8;
          }
        }
      }
      Device = RIMDeviceCollection::DetachDevice(v17, v25);
      if ( Device < 0 )
      {
        v15 = 378LL;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v20 = a9;
    if ( !*((_QWORD *)a9 + 10) )
      *((_QWORD *)a9 + 10) = a1;
    Device = RIMDeviceCollection::AttachDevice(v20, a1, a2, a5, v22);
    if ( Device < 0 )
    {
      v15 = 328LL;
      goto LABEL_8;
    }
    v21 = (void *)*((_QWORD *)v20 + 7);
    if ( v21 )
    {
      *((_BYTE *)v20 + 2736) = 1;
      SetEvent(v21);
    }
  }
}
