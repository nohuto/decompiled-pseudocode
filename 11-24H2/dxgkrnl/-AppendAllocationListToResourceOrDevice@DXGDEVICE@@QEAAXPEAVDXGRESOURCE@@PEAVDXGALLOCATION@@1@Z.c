/*
 * XREFs of ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x140410784
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGDEVICE::AppendAllocationListToResourceOrDevice(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 i; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, this + 26, 0);
  if ( a2 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGRESOURCE *)((char *)a2 + 80), 0);
    if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    v9 = *((_QWORD *)a2 + 3);
    if ( v9 )
    {
      for ( i = *(_QWORD *)(v9 + 64); i; i = *(_QWORD *)(i + 64) )
        v9 = i;
      *(_QWORD *)(v9 + 64) = a3;
      *((_QWORD *)a3 + 7) = v9;
    }
    else
    {
      *((_QWORD *)a2 + 3) = a3;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive(v13);
    *((_QWORD *)a4 + 8) = this[6];
    this[6] = a3;
    v8 = *((_QWORD *)a4 + 8);
    v14 = 2;
    if ( v8 )
      *(_QWORD *)(v8 + 56) = a4;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
}
