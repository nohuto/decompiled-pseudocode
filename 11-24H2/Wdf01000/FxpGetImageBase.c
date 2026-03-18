/*
 * XREFs of FxpGetImageBase @ 0x14006C9A4
 * Callers:
 *     FxRegisterBugCheckCallback @ 0x14006C8E4 (FxRegisterBugCheckCallback.c)
 * Callees:
 *     AuxKlibQueryModuleInformation @ 0x1400DB70C (AuxKlibQueryModuleInformation.c)
 *     AuxKlibInitialize @ 0x1400DB960 (AuxKlibInitialize.c)
 */

__int64 __fastcall FxpGetImageBase(_DRIVER_OBJECT *DriverObject, void **ImageBase, unsigned int *ImageSize)
{
  char *DriverStart; // rbp
  unsigned int v6; // edx
  int v7; // ebx
  unsigned int v8; // r15d
  unsigned int *Pool2; // rax
  unsigned int v10; // edx
  unsigned int *v11; // rdi
  unsigned int *v12; // rcx
  unsigned int i; // edx
  char *v14; // r8
  __int64 v15; // r9
  unsigned int modulesSize; // [rsp+40h] [rbp+8h] BYREF

  modulesSize = 0;
  if ( DriverObject && ImageBase && ImageSize )
  {
    DriverStart = (char *)DriverObject->DriverStart;
    v7 = AuxKlibInitialize();
    if ( v7 >= 0 )
    {
      v7 = AuxKlibQueryModuleInformation(&modulesSize, v6, 0LL);
      if ( v7 >= 0 )
      {
        if ( modulesSize )
        {
          v8 = modulesSize / 0x110;
          Pool2 = (unsigned int *)ExAllocatePool2(256LL, modulesSize, 858803287LL);
          v11 = Pool2;
          if ( Pool2 )
          {
            v7 = AuxKlibQueryModuleInformation(&modulesSize, v10, Pool2);
            if ( v7 >= 0 )
            {
              v12 = v11;
              for ( i = 0; i < v8; ++i )
              {
                v14 = *(char **)v12;
                if ( (unsigned __int64)DriverStart >= *(_QWORD *)v12 )
                {
                  v15 = v12[2];
                  if ( DriverStart < &v14[v15] )
                  {
                    *ImageBase = v14;
                    v7 = 0;
                    *ImageSize = v15;
                    goto LABEL_15;
                  }
                }
                v12 += 68;
              }
              v7 = -1073741275;
            }
LABEL_15:
            ExFreePoolWithTag(v11, 0);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
