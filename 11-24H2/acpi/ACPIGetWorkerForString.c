/*
 * XREFs of ACPIGetWorkerForString @ 0x14003F3E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     ACPIGetConvertToInstanceID @ 0x14003EBAC (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x14003EC14 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToCompatibleID @ 0x14003EDF8 (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003EE60 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpID @ 0x14003F684 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToPnpIDWide @ 0x14003F6EC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x14004C2E8 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004DEF0 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x14004F820 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToDeviceID @ 0x14005496C (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToString @ 0x140054D74 (ACPIGetConvertToString.c)
 *     ACPIGetConvertToHardwareID @ 0x140060BB4 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToSerialIDWide @ 0x140060C1C (ACPIGetConvertToSerialIDWide.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIGetWorkerForString(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  _QWORD *v5; // r8
  unsigned int v7; // ebp
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // edi
  void (__fastcall *v12)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v13; // al
  char **v14; // r9
  void **v15; // r8
  unsigned int *v16; // [rsp+28h] [rbp-10h]
  unsigned int *v17; // [rsp+28h] [rbp-10h]

  v5 = (_QWORD *)*((_QWORD *)a4 + 7);
  v7 = a2 >> 31;
  if ( v5 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 || *(_QWORD *)(a3 + 32) && *(_DWORD *)(a3 + 24) )
    {
      v9 = *(_DWORD *)a4;
      if ( (v9 & 0x10) != 0 )
      {
        v17 = (unsigned int *)*((_QWORD *)a4 + 8);
        if ( (v9 & 0x20) != 0 )
        {
          v10 = ACPIGetConvertToDeviceIDWide(*((_QWORD *)a4 + 3), a2, a3, v9, (__int64)v5, (__int64)v17);
        }
        else if ( (v9 & 0x40) != 0 )
        {
          v10 = ACPIGetConvertToHardwareIDWide(*((_QWORD *)a4 + 3), a2, a3, v9, (__int64)v5, (__int64)v17);
        }
        else if ( (v9 & 0x80u) != 0 )
        {
          v10 = ACPIGetConvertToInstanceIDWide(*((_QWORD *)a4 + 3), a2, a3, v9, v5, v17);
        }
        else if ( (v9 & 0x200) != 0 )
        {
          v10 = ACPIGetConvertToPnpIDWide(*((_QWORD *)a4 + 3), a2, a3, v9, (__int64)v5, (__int64)v17);
        }
        else if ( (v9 & 0x100) != 0 )
        {
          v10 = ACPIGetConvertToCompatibleIDWide(*((_QWORD *)a4 + 3), a2, a3, v9, v5, v17);
        }
        else if ( (v9 & 0x2000) != 0 )
        {
          v10 = ACPIGetConvertToSerialIDWide((_DWORD)v5, a2, a3, v9, (__int64)v5, (__int64)v17);
        }
        else
        {
          v10 = ACPIGetConvertToStringWide((_DWORD)v5, a2, a3, v9, (__int64)v5, (__int64)v17);
        }
      }
      else
      {
        v16 = (unsigned int *)*((_QWORD *)a4 + 8);
        if ( (v9 & 0x20) != 0 )
        {
          v10 = ACPIGetConvertToDeviceID(*((_QWORD *)a4 + 3), a2, a3, v9, (__int64)v5, (__int64)v16);
        }
        else if ( (v9 & 0x40) != 0 )
        {
          v10 = ACPIGetConvertToHardwareID(*((_QWORD *)a4 + 3), a2, a3, v9, (__int64)v5, (__int64)v16);
        }
        else if ( (v9 & 0x80u) != 0 )
        {
          v10 = ACPIGetConvertToInstanceID(*((_QWORD *)a4 + 3), a2, a3, v9, v5, v16);
        }
        else if ( (v9 & 0x200) != 0 )
        {
          v10 = ACPIGetConvertToPnpID(*((_QWORD *)a4 + 3), a2, a3, v9, (__int64)v5, (__int64)v16);
        }
        else if ( (v9 & 0x100) != 0 )
        {
          v10 = ACPIGetConvertToCompatibleID(*((_QWORD *)a4 + 3), a2, a3, v9, v5, v16);
        }
        else
        {
          v10 = ACPIGetConvertToString((_DWORD)v5, a2, a3, v9, (__int64)v5, (__int64)v16);
        }
      }
      v11 = v10;
    }
    else
    {
      v11 = -1072431089;
    }
  }
  else
  {
    v11 = -1073741670;
  }
  *((_DWORD *)a4 + 18) = v11;
  if ( !(_BYTE)v7 )
  {
    dword_1400890B8 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v12 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*((_QWORD *)a4 + 5);
    if ( v12 )
      v12(a1, v11, 0LL, *((_QWORD *)a4 + 6));
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount);
    v14 = (char **)*((_QWORD *)a4 + 1);
    if ( v14[1] != a4 + 8 || (v15 = (void **)*((_QWORD *)a4 + 2), *v15 != a4 + 8) )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = (char *)v15;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount, v13);
    ExFreePoolWithTag(a4, 0);
  }
}
