/*
 * XREFs of RIMInjectInput @ 0x1C01792A0
 * Callers:
 *     <none>
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, int a3, char *a4, unsigned int Size)
{
  char *v6; // r13
  int v8; // r15d
  _BYTE *v9; // r14
  int v10; // edx
  int v11; // edx
  PVOID v12; // r13
  char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  char *v16; // rcx
  _UNKNOWN **v17; // r8
  _UNKNOWN **v18; // r8
  char v19; // dl
  PVOID v21; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-30h] BYREF
  int v23; // [rsp+A0h] [rbp+18h]

  v23 = a3;
  v6 = a2;
  v21 = 0LL;
  Object[0] = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      95,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v21);
  if ( v8 >= 0 )
  {
    v9 = v21;
    RIMLockExclusive((__int64)v21 + 104);
    if ( v9[81] || v9[82] )
    {
      v8 = -1073741637;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v18 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          (_DWORD)v18,
          (_DWORD)gRimLog,
          3,
          1,
          98,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      goto LABEL_44;
    }
    v8 = RawInputManagerDeviceObjectResolveHandle(v6, 3u, 1, Object);
    if ( v8 < 0 )
    {
LABEL_44:
      *((_QWORD *)v9 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v9);
      goto LABEL_45;
    }
    v12 = Object[0];
    if ( Object[0] )
      v13 = (char *)Object[0] + 72;
    else
      v13 = 0LL;
    Object[1] = v13;
    if ( (*((_DWORD *)v13 + 46) & 0x2000) == 0 )
    {
      v8 = -1073741811;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v17 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          (_DWORD)v17,
          (_DWORD)gRimLog,
          3,
          1,
          97,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      goto LABEL_27;
    }
    RIMLockExclusive((__int64)(v9 + 760));
    *((_DWORD *)v13 + 64) = 0;
    v14 = *((_QWORD *)v13 + 57);
    v15 = *(unsigned __int16 *)(v14 + 44);
    if ( Size < (unsigned int)v15 )
      v15 = Size;
    *((_QWORD *)v13 + 33) = (unsigned int)v15;
    if ( v23 )
    {
      v16 = *(char **)(v14 + 24);
      if ( &a4[v15] < a4 || (unsigned __int64)&a4[v15] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      v16 = *(char **)(v14 + 24);
      if ( a4 == v16 )
      {
LABEL_26:
        rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v9, (struct RIMDEV *)v13, 1);
        *((_QWORD *)v9 + 96) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 760, 0LL);
        KeLeaveCriticalRegion();
LABEL_27:
        ObfDereferenceObject(v12);
        goto LABEL_44;
      }
    }
    memmove(v16, a4, (unsigned int)v15);
    goto LABEL_26;
  }
LABEL_45:
  v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v19,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x63u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v8);
  return (unsigned int)v8;
}
