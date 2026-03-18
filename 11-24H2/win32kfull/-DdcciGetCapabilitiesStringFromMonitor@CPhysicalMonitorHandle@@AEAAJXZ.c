/*
 * XREFs of ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14025C4B0
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140205138 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1401F7D9C (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1401F7DFC (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x140205248 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z @ 0x1403224C4 (-DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x140322618 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x140322630 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x1403226B8 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(CPhysicalMonitorHandle *this)
{
  CPhysicalMonitorHandle *v1; // rsi
  char *v2; // r13
  unsigned __int64 v3; // r15
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // eax
  unsigned __int8 v8; // r14
  unsigned int v9; // r12d
  char *Pool2; // rax
  unsigned int v11; // edi
  char *v12; // rax
  int v14; // [rsp+48h] [rbp-19h] BYREF
  int v15; // [rsp+50h] [rbp-11h] BYREF
  __int16 v16; // [rsp+54h] [rbp-Dh]
  char *v17; // [rsp+58h] [rbp-9h]
  _OWORD Src[2]; // [rsp+60h] [rbp-1h] BYREF
  int v19; // [rsp+80h] [rbp+1Fh]
  __int16 v20; // [rsp+84h] [rbp+23h]

  v1 = this;
  v2 = 0LL;
  LOWORD(this) = 0;
  LODWORD(v3) = 0;
  v14 = 0;
  v4 = 0;
  while ( 1 )
  {
    v19 = 0;
    v20 = 0;
    v15 = 15958865;
    HIBYTE(v15) = BYTE1(this);
    memset(Src, 0, sizeof(Src));
    v16 = (unsigned __int8)this;
    if ( (unsigned int)Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = CPhysicalMonitorHandle::DdcciSendAndReceiveDataFromMonitorDevice(v1, v5, -500000LL, &v15, 6u, Src, 0x26u);
    }
    else
    {
      v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(v1, -500000LL, &v15, 6);
      if ( v6 < 0 )
        break;
      v7 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(v1, -500000LL, Src, 0x26u);
    }
    v6 = v7;
    if ( v7 < 0 )
      break;
    if ( (BYTE1(Src[0]) & 0x7Fu) < 3 || (v8 = (BYTE1(Src[0]) & 0x7F) - 3, v8 > 0x20u) )
    {
      v6 = -1071774331;
      break;
    }
    if ( (BYTE1(Src[0]) & 0x7F) == 3 )
      goto LABEL_20;
    v9 = v4 + v8;
    if ( v9 < v4 )
    {
LABEL_23:
      v6 = -1073741675;
      break;
    }
    v6 = 0;
    if ( (unsigned int)v3 <= v9 )
    {
      if ( (_DWORD)v3 )
      {
        v3 = 2LL * (unsigned int)v3;
        if ( v3 > 0xFFFFFFFF )
          goto LABEL_23;
      }
      else
      {
        LODWORD(v3) = 2048;
      }
      Pool2 = (char *)ExAllocatePool2(258LL, (unsigned int)v3, 1664248135LL);
      v17 = Pool2;
      if ( !Pool2 )
      {
        v6 = -1073741801;
        break;
      }
      if ( v2 )
        memmove(Pool2, v2, v4);
      DDCCIFreeMemory(v2);
      v2 = v17;
    }
    memmove(&v2[v14], (char *)Src + 5, v8);
    v4 += v8;
    LODWORD(this) = v8 + v14;
    v14 = (int)this;
    if ( (unsigned int)this > 0xFFE0 )
    {
LABEL_20:
      if ( v4 )
      {
        if ( (unsigned int)v3 > v4 )
        {
          v2[v4] = 0;
          v11 = v4 + 1;
          OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v14, (CPhysicalMonitorHandle *)((char *)v1 + 72));
          if ( !CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(v1) )
          {
            v12 = (char *)ExAllocatePool2(258LL, v11, 1664248135LL);
            *((_QWORD *)v1 + 10) = v12;
            if ( v12 )
            {
              v6 = RtlStringCbCopyA(v12, v11, v2);
              if ( v6 >= 0 )
              {
                *((_DWORD *)v1 + 22) = v11;
              }
              else
              {
                DDCCIFreeMemory(*((void **)v1 + 10));
                *((_QWORD *)v1 + 10) = 0LL;
                *((_DWORD *)v1 + 22) = 0;
              }
            }
            else
            {
              v6 = -1073741801;
            }
          }
          OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v14);
        }
        else
        {
          v6 = -1071774328;
        }
      }
      else
      {
        v6 = -1071774329;
      }
      break;
    }
  }
  DDCCIFreeMemory(v2);
  return (unsigned int)v6;
}
