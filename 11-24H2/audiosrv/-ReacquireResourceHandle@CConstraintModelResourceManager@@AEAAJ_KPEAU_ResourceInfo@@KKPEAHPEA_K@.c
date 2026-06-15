/*
 * XREFs of ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800EED5C
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18007AC9C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800EC56C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 * Callees:
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800EB2BC (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquireResourceHandle(
        HANDLE *this,
        __int64 a2,
        struct _ResourceInfo *a3,
        unsigned int a4,
        unsigned int a5,
        int *a6,
        unsigned __int64 *a7)
{
  DWORD v11; // eax
  __int64 v12; // rdx
  signed int v13; // ebx
  signed int LastError; // eax

  if ( a6 )
    *a6 = 0;
  v11 = WaitForSingleObject(this[9], 0x3E8u);
  if ( v11 == 258 )
  {
    return (unsigned int)-2147023436;
  }
  else
  {
    if ( v11 != -1 )
      goto LABEL_9;
    LastError = GetLastError();
    v13 = LastError;
    if ( LastError > 0 )
      v13 = (unsigned __int16)LastError | 0x80070000;
    if ( v13 >= 0 )
    {
LABEL_9:
      v13 = RmReleaseResources(a2, v12);
      if ( v13 >= 0 )
      {
        if ( a6 )
          *a6 = 1;
        v13 = CConstraintModelResourceManager::AcquireResourceHandle(
                (CConstraintModelResourceManager *)this,
                a3,
                a4,
                a5,
                0,
                a7);
      }
      ReleaseMutex(this[9]);
    }
  }
  return (unsigned int)v13;
}
