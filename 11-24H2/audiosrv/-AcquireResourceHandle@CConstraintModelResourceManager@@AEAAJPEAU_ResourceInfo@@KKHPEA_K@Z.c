/*
 * XREFs of ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800EB2BC
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800EB570 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800EE800 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800EED5C (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EE628 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     WPP_SF_dI @ 0x1800F0294 (WPP_SF_dI.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireResourceHandle(
        CConstraintModelResourceManager *this,
        struct _ResourceInfo *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // r15d
  __int64 v9; // r14
  char *v11; // rax
  __int64 v12; // r8
  char *v13; // rdi
  char *v14; // rdx
  __int64 v15; // rax
  DWORD CurrentProcessId; // eax
  int v17; // ebx
  __int64 v18; // rbx
  DWORD v19; // eax
  int v20; // r14d
  __int64 v21; // rdx
  int v23; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handles; // [rsp+60h] [rbp-20h] BYREF
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF

  v24 = 0LL;
  v23 = 0;
  v6 = 100;
  if ( a4 <= 0x64 )
    v6 = a4;
  v9 = a3;
  v11 = (char *)operator new(saturated_mul(a3, 0x18uLL));
  v13 = v11;
  if ( !v11 )
  {
    if ( a5 )
      return (unsigned int)-2147024882;
LABEL_26:
    v17 = -2005139335;
    goto LABEL_27;
  }
  if ( a3 )
  {
    v14 = v11 + 16;
    do
    {
      *((_DWORD *)v14 - 4) = *(_DWORD *)a2;
      v15 = *((unsigned int *)a2 + 1);
      a2 = (struct _ResourceInfo *)((char *)a2 + 540);
      *((_QWORD *)v14 - 1) = v15;
      *((_WORD *)v14 + 2) = 0;
      *(_DWORD *)v14 = v6;
      v14 += 24;
      --v9;
    }
    while ( v9 );
  }
  if ( a5 )
  {
    CurrentProcessId = GetCurrentProcessId();
    v17 = RmAvailabilityCheck(a3, v13, v6, CurrentProcessId);
    operator delete(v13);
    return (unsigned int)v17;
  }
  v18 = *((_QWORD *)this + 8);
  v19 = GetCurrentProcessId();
  v17 = RmAcquireResources(a3, v13, v6, v19, this, v18, 0, 0, &v23, &v24);
  if ( v17 < 0 )
    goto LABEL_26;
  if ( v23 )
  {
    v20 = 0;
    while ( 1 )
    {
      Handles = (HANDLE)*((_QWORD *)this + 8);
      if ( WaitForMultipleObjects(1u, &Handles, 0, 0x3E8u) )
        break;
      CConstraintModelResourceManager::ProcessRevokedResources(this);
      v26 = 0LL;
      while ( (int)RmGetNotification(v24, &v26) >= 0 )
      {
        if ( (_DWORD)v26 )
        {
          if ( (_DWORD)v26 == 1 )
            v17 = -2005139335;
        }
        else
        {
          v20 = 1;
        }
      }
      if ( v17 < 0 )
        goto LABEL_23;
      if ( v20 )
        goto LABEL_21;
    }
    v17 = -2005139335;
LABEL_23:
    RmReleaseResources(v24, v21);
LABEL_27:
    if ( !v13 )
      goto LABEL_29;
    goto LABEL_28;
  }
LABEL_21:
  *a6 = v24;
LABEL_28:
  operator delete(v13);
LABEL_29:
  if ( v17 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_a5774a8bafb0327b6b857065801df2a8_Traceguids,
        v17);
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v12, v6, *a6);
  }
  return (unsigned int)v17;
}
