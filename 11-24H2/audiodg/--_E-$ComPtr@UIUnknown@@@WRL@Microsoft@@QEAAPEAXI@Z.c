/*
 * XREFs of ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x14003E60C
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140019D9C (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x14003E5CC (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x140058670 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140058D7C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(char *a1)
{
  char *v1; // rbx

  v1 = a1 - 8;
  `eh vector destructor iterator'(a1, 8uLL, *((_QWORD *)a1 - 1), (void (*)(void *))Microsoft::WRL::WeakRef::~WeakRef);
  operator delete[](v1, 8LL * *(_QWORD *)v1 + 8);
  return v1;
}
