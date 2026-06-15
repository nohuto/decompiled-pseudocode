/*
 * XREFs of ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x14002C070
 * Callers:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140043770 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400461E0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEA.c)
 *     ?QueryInterface@?$CComObject@VCAudioProcessor@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400498D0 (-QueryInterface@-$CComObject@VCAudioProcessor@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAudioPump@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004A660 (-QueryInterface@-$CComObject@VCAudioPump@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004BC30 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400553B0 (-QueryInterface@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatil.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140055580 (-QueryInterface@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolati.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400588D0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D750 (-QueryInterface@-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006FEA0 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070D30 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073E00 (-QueryInterface@-$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073EA0 (-QueryInterface@-$CComObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400816C0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatil.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081790 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolati.c)
 *     ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008AD40 (-QueryInterface@-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008ADB0 (-QueryInterface@-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008AFC0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::AtlInternalQueryInterface(
        char *a1,
        const struct ATL::_ATL_INTMAP_ENTRY *a2,
        const struct _GUID *a3,
        char **a4)
{
  _QWORD *i; // rbx
  _DWORD *v8; // rcx
  int v9; // ebp
  __int64 result; // rax
  __int64 (__fastcall *v11)(char *, const struct _GUID *, char **, _QWORD); // rax
  char *v12; // rbx
  char *v13; // rbx

  if ( !a1 || !a2 )
    return 2147942487LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( !*(_QWORD *)&a3->Data1 && *(_DWORD *)a3->Data4 == 192 && *(_DWORD *)&a3->Data4[4] == 1174405120 )
    {
      v13 = &a1[*((_QWORD *)a2 + 1)];
      (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13);
      result = 0LL;
      *a4 = v13;
      return result;
    }
    for ( i = (_QWORD *)((char *)a2 + 8); ; i += 3 )
    {
      if ( !i[1] )
        return 2147500034LL;
      v8 = (_DWORD *)*(i - 1);
      if ( v8 )
      {
        v9 = 0;
        if ( *v8 != a3->Data1
          || v8[1] != *(_DWORD *)&a3->Data2
          || v8[2] != *(_DWORD *)a3->Data4
          || v8[3] != *(_DWORD *)&a3->Data4[4] )
        {
          continue;
        }
      }
      else
      {
        v9 = 1;
      }
      v11 = (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))i[1];
      if ( v11 == (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))1 )
      {
        v12 = &a1[*i];
        (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
        result = 0LL;
        *a4 = v12;
        return result;
      }
      result = v11(a1, a3, a4, *i);
      if ( !(_DWORD)result || !v9 && (int)result < 0 )
        return result;
    }
  }
  return 2147500035LL;
}
