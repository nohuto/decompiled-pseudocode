/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x140982F18
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x140982CA8 (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402F0878 (PnpDiagnosticTraceDeviceOperation.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140721F44 (PnpCheckPossibleBootStartDriver.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PnpIsLegacyDriver @ 0x140983408 (PnpIsLegacyDriver.c)
 *     PnpGetServiceStartType @ 0x140983428 (PnpGetServiceStartType.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x1409BA838 (IopReferenceDriverObjectByName.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A706F4 (IopCallDriverReinitializationRoutines.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     PpInitGetGroupOrderIndex @ 0x140C698C0 (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140C69CC4 (PnpLoadBootFilterDriver.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 result; // rax
  const WCHAR *v6; // r15
  _DWORD *v8; // rsi
  int DriverNameFromKeyNode; // ebx
  int v10; // r13d
  char v11; // r12
  HANDLE v12; // r14
  int i; // ecx
  char v14; // r15
  ULONG_PTR v15; // rdx
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
  int v29; // r8d
  int v30; // edx
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
      *(_QWORD *)(*a4 + 64) = ExAllocatePool2(0x100uLL, DestinationString.MaximumLength, 0x48706E50u);
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
        PipSetDevNodeProblem(*a4, 19, v18);
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
                PipSetDevNodeProblem(*a4, 32, 0);
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
              Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, v15, 0x6E657050u);
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
                v30 = 3;
                break;
              case -1073741472:
                v30 = 40;
                break;
              case -1073741411:
LABEL_97:
                v29 = v10;
                v30 = 39;
LABEL_102:
                PipSetDevNodeProblem(v28, v30, v29);
                goto LABEL_9;
              case -1073741218:
                v30 = 41;
                break;
              case -1073741204:
                goto LABEL_97;
              default:
                goto LABEL_111;
            }
LABEL_100:
            v29 = DriverNameFromKeyNode;
            goto LABEL_102;
          }
          goto LABEL_111;
        }
        if ( DriverNameFromKeyNode == -1073740955 )
        {
          v29 = 0;
          v30 = 37;
          goto LABEL_102;
        }
        if ( DriverNameFromKeyNode == -1073740949 )
        {
          PipSetDevNodeProblem(v28, 48, -1073740949);
          PipSetDevNodeFlags(*a4, 0x100000u);
          goto LABEL_9;
        }
        if ( DriverNameFromKeyNode != -1073740948 )
        {
          if ( DriverNameFromKeyNode == -1073740914 )
          {
            v30 = 38;
            goto LABEL_100;
          }
          if ( DriverNameFromKeyNode == -1073740760 )
          {
            v30 = 52;
            goto LABEL_100;
          }
LABEL_111:
          v30 = 31;
          goto LABEL_100;
        }
        PipSetDevNodeFlags(v28, 0x100000u);
LABEL_113:
        DriverNameFromKeyNode = 0;
        goto LABEL_9;
      }
      PipSetDevNodeProblem(*a4, 19, DriverNameFromKeyNode);
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
