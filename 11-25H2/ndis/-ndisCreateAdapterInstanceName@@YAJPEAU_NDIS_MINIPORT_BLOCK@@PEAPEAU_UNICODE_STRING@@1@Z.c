/*
 * XREFs of ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401706C0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_Z @ 0x14006CDE0 (WPP_RECORDER_SF_Z.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x14008E660 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x140095EB0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x140099960 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x140170990 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x140170A40 (ndisMiniportQueryInterfaceProperty.c)
 *     ndisMiniportQueryDeviceProperty @ 0x140170C40 (ndisMiniportQueryDeviceProperty.c)
 */

__int64 __fastcall ndisCreateAdapterInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _UNICODE_STRING **a2,
        struct _UNICODE_STRING **a3)
{
  struct _UNICODE_STRING **v4; // r14
  unsigned int Flags; // ecx
  int InterfaceProperty; // edi
  bool v8; // sf
  PVOID v9; // rcx
  int v10; // edx
  __int64 v11; // rbx
  struct _UNICODE_STRING *v12; // r9
  char v13; // r10
  unsigned __int16 v14; // dx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  wchar_t *Buffer; // rcx
  struct _UNICODE_STRING *v18; // rax
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  char v23; // [rsp+50h] [rbp-10h]
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  *a2 = 0LL;
  v4 = a2;
  *a3 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      30,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&P);
  Flags = a1->Flags;
  if ( (Flags & 0x80u) != 0 || (Flags & 0x100) != 0 )
  {
    wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v21, (__int64)&P);
    InterfaceProperty = ndisMiniportQueryInterfaceProperty((char)a1);
    if ( !v23 )
    {
LABEL_12:
      v8 = InterfaceProperty < 0;
      goto LABEL_13;
    }
LABEL_11:
    wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v21, v22);
    goto LABEL_12;
  }
  wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v21, (__int64)&P);
  InterfaceProperty = ndisMiniportQueryDeviceProperty((char)a1);
  if ( v23 )
    wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v21, v22);
  v8 = InterfaceProperty < 0;
  if ( InterfaceProperty )
  {
    wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v21, (__int64)&P);
    InterfaceProperty = ndisMiniportQueryDeviceProperty((char)a1);
    if ( !v23 )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_13:
  if ( v8 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Fu,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)a1,
        InterfaceProperty);
    v9 = P;
    P = 0LL;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    Rtl::DuplicateUnicodeString(&v25, P, 1851868238LL);
    v11 = v25;
    if ( v25 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x21u,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (unsigned __int16 *)v25);
      v12 = (struct _UNICODE_STRING *)P;
      v13 = 0;
      v14 = 0;
      v15 = (unsigned __int64)*(unsigned __int16 *)P >> 1;
      if ( v15 )
      {
        v16 = 0LL;
        do
        {
          Buffer = v12->Buffer;
          if ( Buffer[v16] == 47 )
          {
            Buffer[v16] = 45;
            v13 = 1;
            v12 = (struct _UNICODE_STRING *)P;
          }
          v16 = ++v14;
        }
        while ( v14 < v15 );
        if ( v13 )
        {
          v18 = v12;
          v12 = 0LL;
          *a3 = v18;
        }
      }
      *v4 = (struct _UNICODE_STRING *)v11;
      P = 0LL;
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
    }
    else
    {
      InterfaceProperty = -1073741670;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          13,
          32,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (char)a1);
      }
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&v25, 0LL);
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&P, 0LL);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = InterfaceProperty;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x22u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      v20);
  }
  return (unsigned int)InterfaceProperty;
}
