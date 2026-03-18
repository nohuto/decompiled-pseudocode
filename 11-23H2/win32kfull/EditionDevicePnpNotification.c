/*
 * XREFs of EditionDevicePnpNotification @ 0x1C0038A40
 * Callers:
 *     <none>
 * Callees:
 *     PostDeviceNotification @ 0x1C0038650 (PostDeviceNotification.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FD83C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FD908 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FDA48 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FDAEC (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02406D8 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0240900 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall EditionDevicePnpNotification(struct DEVICEINFO **a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rdi
  unsigned int v6; // ebp
  struct DEVICEINFO *v7; // rbx
  char v8; // cl
  void *v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  InteractiveControlManager *v14; // rax
  int v15; // eax
  InteractiveControlManager *v16; // rax

  v3 = *((_DWORD *)a1 + 5);
  v5 = 0LL;
  v6 = 0;
  if ( v3 == 2 )
  {
    v5 = 1LL;
  }
  else if ( *((_DWORD *)a1 + 5) == 3 )
  {
    v5 = 2LL;
  }
  v7 = *a1;
  v8 = *((_BYTE *)*a1 + 48);
  if ( v8 == 2 )
  {
    v6 = *((_DWORD *)a1 + 4);
    v10 = v3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            v13 = *((_DWORD *)v7 + 50);
            if ( (v13 & 0x100) != 0 )
            {
              v14 = InteractiveControlManager::Instance();
              InteractiveControlManager::OnDeviceRemoval(
                v14,
                (struct RawInputManagerDeviceObject *)(((unsigned __int64)v7 - 72) & -(__int64)(v7 != 0LL)));
            }
            else if ( (v13 & 0x200) != 0 )
            {
              InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)(((unsigned __int64)v7 - 72) & -(__int64)(v7 != 0LL)));
            }
          }
        }
        else if ( (*((_DWORD *)v7 + 50) & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)(((unsigned __int64)v7 - 72) & -(__int64)(v7 != 0LL)));
        }
      }
      else if ( (*((_DWORD *)v7 + 50) & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)(((unsigned __int64)v7 - 72) & -(__int64)(v7 != 0LL)));
      }
    }
    else if ( v7 )
    {
      v15 = *((_DWORD *)v7 + 50);
      if ( (v15 & 0x100) != 0 )
      {
        v16 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceAttach(v16, (struct DEVICEINFO *)((char *)v7 - 72));
      }
      else if ( (v15 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceAttached((struct DEVICEINFO *)((char *)v7 - 72));
      }
    }
  }
  else if ( !v8 && v3 == 4 )
  {
    v9 = (void *)*((_QWORD *)v7 + 112);
    if ( v9 )
    {
      Win32FreePool(v9);
      *((_QWORD *)v7 + 112) = 0LL;
      *((_WORD *)v7 + 445) = 0;
    }
  }
  if ( v5 )
  {
    PostDeviceNotification(0LL, *a1, a3, v5, v6);
    if ( (*((_DWORD *)*a1 + 46) & 0x2000) != 0 && (unsigned __int64)(v5 - 1) <= 1 )
      ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  }
}
