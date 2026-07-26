/*
 * XREFs of ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x140172460
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$MakeSizedPoolPtr@_W@@YA?AV?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@K_K@Z @ 0x140142DB0 (--$MakeSizedPoolPtr@_W@@YA-AV-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@K_K@Z.c)
 */

__int64 __fastcall ndisMiniportQueryDevicePropertyData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _DEVPROPKEY *a2,
        wchar_t **a3)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rsi
  char v5; // bp
  __int64 v6; // rdx
  unsigned int DevicePropertyData; // ebx
  wchar_t *v9; // r14
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  size_t v12; // rbx
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-30h]
  PDEVPROPTYPE Typea; // [rsp+38h] [rbp-30h]
  ULONG v15; // [rsp+70h] [rbp+8h] BYREF
  const struct _DEVPROPKEY *RequiredSize; // [rsp+78h] [rbp+10h] BYREF
  PVOID Data; // [rsp+80h] [rbp+18h] BYREF

  RequiredSize = a2;
  *a3 = 0LL;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  v5 = (char)a1;
  LODWORD(RequiredSize) = 0;
  v15 = 0;
  DevicePropertyData = IoGetDevicePropertyData(
                         PhysicalDeviceObject,
                         &DEVPKEY_Device_InstanceId,
                         0,
                         0,
                         0,
                         0LL,
                         (PULONG)&RequiredSize,
                         &v15);
  if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
  {
    if ( (unsigned int)RequiredSize < 2 || ((unsigned __int8)RequiredSize & 1) != 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x16u,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          v5,
          PhysicalDeviceObject);
      return 3221225534LL;
    }
    else
    {
      MakeSizedPoolPtr<wchar_t>(&Data, v6, (unsigned int)RequiredSize);
      v9 = (wchar_t *)Data;
      if ( Data )
      {
        v10 = IoGetDevicePropertyData(
                PhysicalDeviceObject,
                &DEVPKEY_Device_InstanceId,
                0,
                0,
                (ULONG)RequiredSize,
                Data,
                (PULONG)&RequiredSize,
                &v15);
        v11 = v10;
        if ( v10 >= 0 )
        {
          if ( v15 == 18 || v15 == 25 )
          {
            v12 = (unsigned __int64)(unsigned int)RequiredSize >> 1;
            if ( v12 - 1 == wcsnlen(v9, v12) )
            {
              Data = 0LL;
              *a3 = v9;
              wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&Data, 0LL);
              return 0LL;
            }
            else
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0xDu,
                  0x1Au,
                  (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
                  v5,
                  PhysicalDeviceObject);
              wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&Data, 0LL);
              return 3221225534LL;
            }
          }
          else
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(Typea) = v15;
              WPP_RECORDER_SF_qqD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xDu,
                0x19u,
                (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
                v5,
                (char)PhysicalDeviceObject,
                Typea);
            }
            wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&Data, 0LL);
            return 3221225485LL;
          }
        }
        else
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(Typea) = v10;
            WPP_RECORDER_SF_qqD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x18u,
              (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
              v5,
              (char)PhysicalDeviceObject,
              Typea);
          }
          wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&Data, 0LL);
          return v11;
        }
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            (_DWORD)Data + 13,
            (_WORD)Data + 23,
            (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
            v5,
            PhysicalDeviceObject);
        wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&Data, 0LL);
        return 3221225626LL;
      }
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(Type) = DevicePropertyData;
      WPP_RECORDER_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x15u,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        v5,
        (char)PhysicalDeviceObject,
        Type);
    }
    return DevicePropertyData;
  }
}
