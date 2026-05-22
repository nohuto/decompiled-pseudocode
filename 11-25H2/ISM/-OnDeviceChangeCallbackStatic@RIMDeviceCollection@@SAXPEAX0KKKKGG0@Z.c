/*
 * XREFs of ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18007BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18004DC40 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x18007BF94 (-AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18008217C (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x180082878 (-ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
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
  int v9; // r9d
  int v10; // r9d
  int Device; // eax
  RIMDeviceCollection *v12; // rcx
  __int64 v13; // rdx
  RIMDeviceCollection *v14; // rbx
  DWORD v15; // edx
  void *v16; // rcx
  RIMDeviceCollection *v17; // rbx
  void *v18; // rcx
  struct RIMDevice **v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct RIMDevice *v21; // [rsp+40h] [rbp+8h] BYREF

  v9 = a4 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 2 )
        return;
      v21 = 0LL;
      Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v21, 0LL);
      if ( Device < 0 )
      {
        v13 = 393LL;
LABEL_6:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v13,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
          (const char *)(unsigned int)Device,
          a5);
        return;
      }
      Device = RIMDeviceCollection::ResetDevice(v12, v21);
      if ( Device < 0 )
      {
        v13 = 395LL;
        goto LABEL_6;
      }
    }
    else
    {
      v14 = a9;
      v21 = 0LL;
      Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v21, 0LL);
      if ( Device < 0 )
      {
        v13 = 349LL;
        goto LABEL_6;
      }
      v16 = (void *)*((_QWORD *)v14 + 5);
      if ( v16 )
      {
        if ( !WaitForSingleObject(v16, v15) )
        {
          *((_BYTE *)v14 + 2736) = 1;
          Device = RIMDeviceCollection::OnReadCallbackStatic(v14, 0, 0LL);
          if ( Device < 0 )
          {
            v13 = 374LL;
            goto LABEL_6;
          }
        }
      }
      Device = RIMDeviceCollection::DetachDevice(v14, v21);
      if ( Device < 0 )
      {
        v13 = 378LL;
        goto LABEL_6;
      }
    }
  }
  else
  {
    v17 = a9;
    if ( !*((_QWORD *)a9 + 10) )
      *((_QWORD *)a9 + 10) = a1;
    Device = RIMDeviceCollection::AttachDevice(v17, a1, a2, a5, v19);
    if ( Device < 0 )
    {
      v13 = 328LL;
      goto LABEL_6;
    }
    v18 = (void *)*((_QWORD *)v17 + 7);
    if ( v18 )
    {
      *((_BYTE *)v17 + 2736) = 1;
      SetEvent(v18);
    }
  }
}
