/*
 * XREFs of ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x180080580
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x180086850 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18008F628 (-InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMDeviceCollection::AttachDevice(
        RIMDeviceCollection *this,
        void *a2,
        void *a3,
        unsigned int a4,
        struct RIMDevice **a5)
{
  int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // esi
  int inserted; // ebx
  __int64 v13; // rdx
  struct RIMDevice *v14; // r8
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct RIMDevice *v18; // [rsp+60h] [rbp+8h] BYREF

  v9 = (*(__int64 (__fastcall **)(RIMDeviceCollection *))(*(_QWORD *)this + 112LL))(this);
  v10 = *(_QWORD *)this;
  a5 = 0LL;
  v11 = v9;
  v18 = 0LL;
  v16 = v9;
  inserted = (*(__int64 (__fastcall **)(RIMDeviceCollection *, void *, void *, _QWORD))(v10 + 96))(this, a2, a3, a4);
  if ( inserted >= 0 )
  {
    inserted = RIMDeviceCollection::InsertDevice(this, (struct RIMDevice *)a5);
    if ( inserted >= 0 )
    {
      inserted = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD, struct RIMDevice **))(*(_QWORD *)this + 64LL))(
                   this,
                   v11,
                   &v18);
      if ( inserted >= 0 )
      {
        v14 = v18;
        if ( v18 && *((_DWORD *)v18 + 1) )
        {
          *(_DWORD *)v18 = v11;
          NtRIMGetSourceProcessId(a2, a3, (char *)v14 + 16);
          if ( *(_DWORD *)v18 == *((_DWORD *)a5 + 10) && *((_DWORD *)v18 + 1) )
          {
            a5[4] = v18;
            if ( (*((_DWORD *)v18 + 1) & 0xFFFFFEFF) == 0 )
              return 0LL;
            inserted = (*(__int64 (__fastcall **)(_QWORD, struct RIMDevice *, _QWORD))(**((_QWORD **)this + 2) + 40LL))(
                         *((_QWORD *)this + 2),
                         v18,
                         *((_QWORD *)this + 3));
            if ( inserted >= 0 )
              return 0LL;
            v13 = 1102LL;
          }
          else
          {
            inserted = -2147024809;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2E,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevice.cpp",
              (const char *)0x80070057LL,
              v16);
            v13 = 1081LL;
          }
        }
        else
        {
          inserted = -2147418113;
          v13 = 1076LL;
        }
      }
      else
      {
        v13 = 1066LL;
      }
    }
    else
    {
      v13 = 1059LL;
    }
  }
  else
  {
    v13 = 1057LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)inserted,
    v16);
  return (unsigned int)inserted;
}
