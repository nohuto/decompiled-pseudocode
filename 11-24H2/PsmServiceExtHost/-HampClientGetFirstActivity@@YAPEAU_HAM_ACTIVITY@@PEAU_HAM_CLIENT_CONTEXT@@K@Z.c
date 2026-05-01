/*
 * XREFs of ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006A69C
 * Callers:
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DAB8 (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800412CC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18006A6CC (-HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETER.c)
 *     ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180071154 (-HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_ACTIVITY *__fastcall HampClientGetFirstActivity(struct _HAM_CLIENT_CONTEXT *a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)a1 + 56);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct _HAM_ACTIVITY *)(*v1 - 48LL);
}
