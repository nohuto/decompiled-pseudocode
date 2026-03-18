/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x1409AD954
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1409AD6E4 (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140463D80 (PnpDiagnosticTraceDeviceOperation.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407182B4 (PnpCheckPossibleBootStartDriver.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PnpIsLegacyDriver @ 0x1409ADE44 (PnpIsLegacyDriver.c)
 *     PnpGetServiceStartType @ 0x1409ADE64 (PnpGetServiceStartType.c)
 *     IopReferenceDriverObjectByName @ 0x1409AE1B8 (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B1F94 (IopGetDriverNameFromKeyNode.c)
 *     PipOpenServiceEnumKeys @ 0x1409B2784 (PipOpenServiceEnumKeys.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A74500 (IopCallDriverReinitializationRoutines.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     PpInitGetGroupOrderIndex @ 0x140C55ABC (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140C55EC0 (PnpLoadBootFilterDriver.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 result; // rax
  const WCHAR *v6; // r15
  _DWORD *v8; // rsi
  int DriverNameFromKeyNode; // ebx
  unsigned int v10; // r13d
  char v11; // r12
  HANDLE v12; // r14
  int i; // ecx
  char v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  _QWORD *Pool2; // rax
  int v18; // eax
  int ServiceStartType; // eax
  unsigned int v20; // r15d
  int v21; // eax
  __int64 v22; // rax
  int Driver; // eax
  int v24; // ecx
  void *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned int v31; // [rsp+34h] [rbp-2Ch] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-10h] BYREF
  char v35; // [rsp+90h] [rbp+30h]

  result = 0LL;
  v6 = L"\\Driver\\";
  v31 = 0;
  v35 = 0;
  KeyHandle = 0LL;
  v8 = 0LL;
  DriverNameFromKeyNode = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  Destination = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    for ( i = 0; ; ++i )
    {
      if ( !*v6 )
      {
        RtlInitUnicodeString(&Destination, DestinationString.Buffer);
        v14 = 1;
        goto LABEL_6;
      }
      if ( DestinationString.Buffer[i] != *v6 )
        break;
      ++v6;
    }
    if ( !*(_WORD *)(*a4 + 56) )
    {
      *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
      *(_QWORD *)(*a4 + 64) = ExAllocatePool2(0x100uLL);
      v25 = *(void **)(*a4 + 64);
      if ( !v25 )
      {
        *(_WORD *)(*a4 + 58) = 0;
        DriverNameFromKeyNode = -1073741823;
        *(_WORD *)(*a4 + 56) = 0;
        *(_QWORD *)(*a4 + 64) = 0LL;
        return (unsigned int)DriverNameFromKeyNode;
      }
      memmove(v25, DestinationString.Buffer, DestinationString.MaximumLength);
    }
    v18 = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &KeyHandle, 0LL, 0);
    DriverNameFromKeyNode = v18;
    if ( v18 < 0 )
    {
      if ( v18 != -1073741772 || a5 )
        PipSetDevNodeProblem(*a4, 19LL, (unsigned int)v18);
      else
        DriverNameFromKeyNode = 0;
      v12 = KeyHandle;
    }
    else
    {
      v12 = KeyHandle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        v35 = 1;
        v14 = 0;
LABEL_6:
        v8 = (_DWORD *)IopReferenceDriverObjectByName(&Destination);
        KeyHandle = v8;
        if ( !v8 )
        {
          if ( v14 )
          {
LABEL_8:
            DriverNameFromKeyNode = -1073741823;
LABEL_9:
            v11 = v35;
            goto LABEL_10;
          }
          ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v12, &v31);
          v20 = v31;
          if ( ServiceStartType < 0 )
            v20 = 4;
          if ( a5 == 3 || PnPBootDriversInitialized )
          {
            v22 = a4[1];
            if ( v20 > *(_DWORD *)v22 )
            {
              if ( v20 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
                PipSetDevNodeProblem(*a4, 32LL, 0LL);
              goto LABEL_8;
            }
            if ( !*(_BYTE *)(v22 + 4) )
            {
              if ( v20 && !PnpCheckPossibleBootStartDriver(v12) )
                *(_BYTE *)(*a4 + 688) = 1;
              goto LABEL_8;
            }
            Driver = IopLoadDriver(v12);
            DriverNameFromKeyNode = Driver;
            v12 = 0LL;
            v10 = Driver;
            if ( Driver < 0 && Driver != -1073740955 )
            {
              v26 = (unsigned int)(Driver + 1073740961);
              if ( (unsigned int)v26 > 0x2F || (v27 = 0x800000003001LL, !_bittest64(&v27, v26)) )
              {
                if ( DriverNameFromKeyNode != -1073741218
                  && DriverNameFromKeyNode != -1073741670
                  && DriverNameFromKeyNode != -1073740760 )
                {
                  DriverNameFromKeyNode = -1073741204;
                }
              }
            }
            if ( PnPInitialized )
              IopCallDriverReinitializationRoutines(0LL);
            v8 = (_DWORD *)IopReferenceDriverObjectByName(&Destination);
            if ( !v8 )
            {
              if ( PnpBootMode )
              {
                if ( (unsigned int)(DriverNameFromKeyNode + 1073740961) > 0xD
                  || (v24 = 12353, !_bittest(&v24, DriverNameFromKeyNode + 1073740961)) )
                {
                  if ( DriverNameFromKeyNode != -1073740760 )
                    DriverNameFromKeyNode = -1073741204;
                }
              }
            }
          }
          else
          {
            PpInitGetGroupOrderIndex(v12);
            v21 = PnpLoadBootFilterDriver(v12, &Destination);
            DriverNameFromKeyNode = v21;
            if ( v21 < 0 )
            {
              if ( (unsigned int)(v21 + 1073740949) > 1 )
              {
                if ( v20 && !*(_BYTE *)(a4[1] + 4) && !PnpCheckPossibleBootStartDriver(v12) )
                  *(_BYTE *)(*a4 + 688) = 1;
                v8 = KeyHandle;
                goto LABEL_9;
              }
              v8 = KeyHandle;
            }
            else
            {
              v8 = KeyHandle;
              if ( !KeyHandle )
                goto LABEL_89;
              PsReferenceSiloContext(KeyHandle);
            }
          }
        }
        if ( v8 )
        {
          if ( (v8[4] & 0x10) == 0 )
            goto LABEL_8;
          if ( !(unsigned int)PnpIsLegacyDriver(v8) )
          {
            if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 771) <= 2 )
            {
              DriverNameFromKeyNode = 0;
              v16 = (__int64 *)((char *)&a4[a5] + v15);
              Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
              if ( Pool2 )
              {
                *Pool2 = v8;
                v8 = 0LL;
                Pool2[1] = 0LL;
                while ( *v16 )
                  v16 = (_QWORD *)(*v16 + 8LL);
                *v16 = Pool2;
              }
              else
              {
                DriverNameFromKeyNode = -1073741670;
              }
              goto LABEL_9;
            }
            goto LABEL_8;
          }
          if ( a5 == 3 )
          {
            PipSetDevNodeFlags(*a4, 0x1000u);
            PipSetDevNodeState(*a4, 778);
            goto LABEL_8;
          }
          goto LABEL_113;
        }
LABEL_89:
        PnpDiagnosticTraceDeviceOperation(
          &KMPnPEvt_DriverLoad_Fail,
          (unsigned __int16 *)(*a4 + 40),
          DriverNameFromKeyNode,
          (__int64)&Destination,
          0);
        v28 = *a4;
        if ( (*(_DWORD *)(*a4 + 396) & 0x6000) != 0 )
          goto LABEL_9;
        if ( DriverNameFromKeyNode <= -1073740961 )
        {
          if ( DriverNameFromKeyNode != -1073740961 )
          {
            switch ( DriverNameFromKeyNode )
            {
              case -1073741670:
                v30 = 3LL;
                break;
              case -1073741472:
                v30 = 40LL;
                break;
              case -1073741411:
LABEL_97:
                v29 = v10;
                v30 = 39LL;
LABEL_102:
                PipSetDevNodeProblem(v28, v30, v29);
                goto LABEL_9;
              case -1073741218:
                v30 = 41LL;
                break;
              case -1073741204:
                goto LABEL_97;
              default:
                goto LABEL_111;
            }
LABEL_100:
            v29 = (unsigned int)DriverNameFromKeyNode;
            goto LABEL_102;
          }
          goto LABEL_111;
        }
        if ( DriverNameFromKeyNode == -1073740955 )
        {
          v29 = 0LL;
          v30 = 37LL;
          goto LABEL_102;
        }
        if ( DriverNameFromKeyNode == -1073740949 )
        {
          PipSetDevNodeProblem(v28, 48LL, 3221226347LL);
          PipSetDevNodeFlags(*a4, 0x100000u);
          goto LABEL_9;
        }
        if ( DriverNameFromKeyNode != -1073740948 )
        {
          if ( DriverNameFromKeyNode == -1073740914 )
          {
            v30 = 38LL;
            goto LABEL_100;
          }
          if ( DriverNameFromKeyNode == -1073740760 )
          {
            v30 = 52LL;
            goto LABEL_100;
          }
LABEL_111:
          v30 = 31LL;
          goto LABEL_100;
        }
        PipSetDevNodeFlags(v28, 0x100000u);
LABEL_113:
        DriverNameFromKeyNode = 0;
        goto LABEL_9;
      }
      PipSetDevNodeProblem(*a4, 19LL, (unsigned int)DriverNameFromKeyNode);
    }
LABEL_10:
    if ( v12 )
      ZwClose(v12);
    if ( v11 && Destination.Buffer )
    {
      ExFreePool(Destination.Buffer);
      Destination = 0LL;
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    return (unsigned int)DriverNameFromKeyNode;
  }
  return result;
}
