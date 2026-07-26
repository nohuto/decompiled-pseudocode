/*
 * XREFs of ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x140165BD0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$MakeSizedPoolPtr@_W@@YA?AV?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@K_K@Z @ 0x140137D90 (--$MakeSizedPoolPtr@_W@@YA-AV-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@K_K@Z.c)
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
  int v9; // edx
  wchar_t *v10; // r14
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  size_t v13; // rbx
  int v14; // edx
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-30h]
  PDEVPROPTYPE Typea; // [rsp+38h] [rbp-30h]
  ULONG v17; // [rsp+70h] [rbp+8h] BYREF
  const struct _DEVPROPKEY *RequiredSize; // [rsp+78h] [rbp+10h] BYREF
  PVOID Data; // [rsp+80h] [rbp+18h] BYREF

  RequiredSize = a2;
  *a3 = 0LL;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  v5 = (char)a1;
  LODWORD(RequiredSize) = 0;
  v17 = 0;
  DevicePropertyData = IoGetDevicePropertyData(
                         PhysicalDeviceObject,
                         &DEVPKEY_Device_InstanceId,
                         0,
                         0,
                         0,
                         0LL,
                         (PULONG)&RequiredSize,
                         &v17);
  if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
  {
    if ( (unsigned int)RequiredSize < 2 || ((unsigned __int8)RequiredSize & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          13,
          22,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          v5,
          (char)PhysicalDeviceObject);
      }
      return 3221225534LL;
    }
    else
    {
      MakeSizedPoolPtr<wchar_t>(&Data, v6, (unsigned int)RequiredSize);
      v10 = (wchar_t *)Data;
      if ( Data )
      {
        v11 = IoGetDevicePropertyData(
                PhysicalDeviceObject,
                &DEVPKEY_Device_InstanceId,
                0,
                0,
                (ULONG)RequiredSize,
                Data,
                (PULONG)&RequiredSize,
                &v17);
        v12 = v11;
        if ( v11 >= 0 )
        {
          if ( v17 == 18 || v17 == 25 )
          {
            v13 = (unsigned __int64)(unsigned int)RequiredSize >> 1;
            if ( v13 - 1 == wcsnlen(v10, v13) )
            {
              Data = 0LL;
              *a3 = v10;
              wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&Data, 0LL);
              return 0LL;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v14) = 2;
                WPP_RECORDER_SF_qq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v14,
                  13,
                  26,
                  (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
                  v5,
                  (char)PhysicalDeviceObject);
              }
              wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&Data, 0LL);
              return 3221225534LL;
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(Typea) = v17;
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
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(Typea) = v11;
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
          return v12;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            (_DWORD)Data + 13,
            (_DWORD)Data + 23,
            (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
            v5,
            (char)PhysicalDeviceObject);
        }
        wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&Data, 0LL);
        return 3221225626LL;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
